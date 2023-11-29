#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector> 
#include <list>
#include <algorithm>
#include <cstring>
#include <string>
#include <chrono>
#include <iterator>


using namespace std;


class Message
{
private:
    string content;
    int senderID;
    chrono::time_point<std::chrono::system_clock> timestamp;
public:
    Message();
    ~Message();
    Message(string text, int senderID); 
    void setContent(string text);
    string getContent();
    int getSenderID();
    
};





