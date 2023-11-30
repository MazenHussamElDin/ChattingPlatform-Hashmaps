#include <iostream>
#include <cstring>
#include <string>


#include "Hmap.hpp"


class SystemManager{

  public:

    Hmap<Chat> chatmap;
    Hmap<User> usermap;
    void createChat(LinkedList<User>list);
    void sendMessage(int chatID, string content, int senderID);
    void addUser(string name, string password);

 };
