#include <iostream>
#include <cstring>
#include <string>



#include "LinkedList.hpp"




using namespace std;

class Chat
{
private:
int chatID;
LinkedList<User> users; 
LinkedList<Message>chatMessages;
static int counterChat;
public:
    Chat();
    Chat(LinkedList<User> list);
    ~Chat();
    int getChatID() const;
    void setUsers(LinkedList<User> alist);
    LinkedList<User> getUsers() const;
    void setMessage(Message message);
    LinkedList<Message> getMessage() const;
    int getCounterChat();
    void setCounterChat(int count);
    friend std::ostream& operator<<(std::ostream& os, const Chat& c) {
        os << c.chatID << " " ;
        return os;
    }

};



/*
friend std::ostream& operator<<(std::ostream& os, const Chat& chat){
    
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
*/

