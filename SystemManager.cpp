#include "SystemManager.hpp"

void SystemManager::createChat(LinkedList<User>list){
    
    Chat newChat(list);
    chatmap.insert(newChat.getChatID() , newChat); 
        
}

void SystemManager::sendMessage(int chatID, string content, int senderID){
    bool found;
    Chat chat = chatmap.search(chatID, found);
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
}

