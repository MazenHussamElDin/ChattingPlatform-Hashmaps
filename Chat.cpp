#include "Chat.hpp"





Chat::Chat()  {
    chatID = counterChat++;
}

Chat::~Chat() //edit it
{

}

Chat::Chat(LinkedList<User> list) : users(list) {
    chatID = counterChat++;
}

int Chat::getChatID() const {
    return chatID;
}

void Chat::setUsers(LinkedList<User> alist) {
    users = alist;
}

LinkedList<User> Chat::getUsers() const {
    return users;
}

void Chat::setMessage(Message message) {
    chatMessages.insert(message);
}

LinkedList<Message> Chat::getMessage() const {
    return chatMessages;
}

int Chat::getCounterChat(){
    return counterChat;
}

void Chat::setCounterChat(int count){
    counterChat = count;
}


std::ostream& operator<<(std::ostream& os,  const Chat&  chat) {
    os << "Chat ID: " << chat.getChatID() << std::endl;
    os << "Users: ";
    LinkedList<User> users = chat.getUsers();
    LinkedList<User>::NodePointer userPtr = users.getFirst(); // Assuming 'first' is the head pointer
    while (userPtr != nullptr) {
        os << userPtr->data.getName() << " ";
        userPtr = userPtr->next;
    }

    os << std::endl << "Messages: ";
    LinkedList<Message> messages = chat.getMessage();
    LinkedList<Message>::NodePointer messagePtr = messages.getFirst(); // Assuming 'first' is the head pointer
    while (messagePtr != nullptr) {
        os << messagePtr->data.getContent() << " ";
        messagePtr = messagePtr->next;
    }

    return os;
}

int Chat::counterChat = 0; // Initialize static member variable

// 3YZEEN N3ML MAIN 

/*
int main() {
    LinkedList<User> userList;
    // Populate userList with some users...
    // ...

    LinkedList<Message> messageList;
    // Populate messageList with some messages...
    // ...

    Chat chat1(userList); // Create a chat with user list
    Chat chat2; // Create another chat

    cout << "Chat 1 ID: " << chat1.getChatID() << endl;
    cout << "Chat 2 ID: " << chat2.getChatID() << endl;

    // Set messages for chat1
    chat1.setMessage(messageList);

    // Get users from chat1
    LinkedList<User> retrievedUsers = chat1.getUsers();
    // Display retrieved users...
    // ...

    // Get messages from chat1
    LinkedList<Message> retrievedMessages = chat1.getMessage();
    // Display retrieved messages...
    // ...

    // Get and set the counter value
    int counterValue = chat1.getCounterChat();
    chat2.setCounterChat(counterValue);

    return 0;
}



*/