#include "Message.hpp"

    Message::Message() : senderID(0) {
        timestamp = chrono::system_clock::now();
    }



    // Parameterized constructor
    Message::Message(string text, int sender) : content(text), senderID(sender) {
        timestamp = chrono::system_clock::now();
    }

    // Setter for content
    void Message::setContent(string text) {
        content = text;
    }

    // Getter for content
    string Message::getContent() {
        return content;
    }

    // Getter for senderID
    int Message::getSenderID() {
        return senderID;
    }


bool Message::operator==(const Message& other) const {
    return (content == other.content && senderID == other.senderID && timestamp == other.timestamp);
}



/*
int main() {
    // Create a message using default constructor
    Message defaultMsg;
    cout << "Default Message Content: " << defaultMsg.getContent() << endl;
    cout << "Default Message Sender ID: " << defaultMsg.getSenderID() << endl;

    // Create a message with parameters
    Message customMsg("Hello, there!", 123);
    cout << "Custom Message Content: " << customMsg.getContent() << endl;
    cout << "Custom Message Sender ID: " << customMsg.getSenderID() << endl;

    // Set content using setter
    customMsg.setContent("How are you?");
    cout << "Updated Content: " << customMsg.getContent() << endl;

    return 0;
}

*/