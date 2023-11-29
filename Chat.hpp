#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <iterator>
#include <random>


#include "LinkedList.hpp"
#include "User.hpp"
#include "Message.hpp"


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
    void setMessage(LinkedList<Message> alist);
    LinkedList<Message> getMessage() const;
    int getCounterChat();
    void setCounterChat(int count);
    

};


