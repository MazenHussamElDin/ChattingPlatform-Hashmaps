#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
#include "SystemManager.hpp"

int main(){

    SystemManager m1;
    User u1("Mazen", "123");
    User u2("Yomna", "124");
    User u3("Badr", "125");
    User u4("Menna", "126");
    LinkedList<User>l1;
    l1.insert(u1);
    l1.insert(u2);
    l1.insert(u3);
    l1.insert(u4);
    cout << "LIST!"<< endl;
    l1.display();
    cout << endl;
    m1.createChat(l1);
    m1.addUser("Mazen", "123");
    void sendMessage(int chatID, string content, int senderID);
    m1.sendMessage(0,"HELLO AKHERAN", 123);

    /*
    LinkedList<User> l1;
    Hmap<Chat> myList;
    cout <<"HMAP"<<endl;
    Chat p1(l1);
    Chat p2(l1);
    Chat p3(l1);
    Chat p4(l1);
    myList.insert(p1.getChatID(),p1);
    myList.insert(p2.getChatID(),p2);
    myList.insert(p3.getChatID(),p3);
    myList.insert(p4.getChatID(),p4);
    myList.display();
    */

    /*
    cout << endl;;
    cout << "LINKEDLIST"<< endl;

    LinkedList<person> myList1;

    person p5(1, "mazen");
    person p6(2, "yomna");
    person p7(3, "badr");
    person p8(4, "menna");
    myList1.insert(p5);
    myList1.insert(p6);
    myList1.insert(p7);
    myList1.insert(p8);
    myList1.display();
    */

 
}