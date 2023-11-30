#include <iostream>

#include <cstring>
#include <string>
#include <chrono>



using namespace std;


class Message
{
private:
    string content;
    int senderID;
    chrono::time_point<std::chrono::system_clock> timestamp;
public:
    Message();
    Message(string text, int senderID); 
    void setContent(string text);
    string getContent();
    int getSenderID();
    friend std::ostream& operator<<(std::ostream& os, const Message& m) {
        os << m.senderID << " " << m.content;
        return os;
    }
    bool operator==(const Message& other) const ;
};







