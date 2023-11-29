#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <iterator>

#include "Hmap.hpp"
#include "Chat.hpp"
#include "User.hpp"
#include "LinkedList.hpp"
class SystemManager{

  public:

    Hmap<Chat> chatmap;
    Hmap<User> usermap;
    void createChat(LinkedList<User>list);
    void sendMessage(int chatID, string content, int senderID);
    void addUser(string name, string password);









 };
