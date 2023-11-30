#include "SystemManager.hpp"

void SystemManager::createChat(LinkedList<User>list){
    
    Chat newChat(list);
    chatmap.insert(newChat.getChatID() , newChat); 
    cout << "CREATE CHAT INVOKED"<< endl;
        
}

void SystemManager::sendMessage(int chatID, string content, int senderID){

    bool found;
    Chat chat = chatmap.search(chatID, found);
    cout << "SEND MESSAGE INVOKED"<< endl;
    if(found){
        Message m(content, senderID);
        chat.setMessage(m);
    }else{
        cerr << "CHAT NOT FOUND!";
    }
}



void SystemManager::addUser(string name, string password){
    User user(name, password);
    usermap.insert(user.getUserID(),user);
    cout << "ADD USER INVOKED"<< endl;
}

