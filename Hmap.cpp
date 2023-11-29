#include "Hmap.hpp"



 template <typename Tvalue>
Hmap<Tvalue>::Node::Node() : key(0), value(Tvalue()), next(nullptr) {}

template <typename Tvalue>
Hmap<Tvalue>::Node::Node(int key, Tvalue value) : key(key), value(value), next(nullptr) {}

template <typename Tvalue>
Hmap<Tvalue>::Hmap() : mySize(0) {
    for (int i = 0; i < TableSize; i++)
        table[i] = nullptr;
}

template <typename Tvalue>
Hmap<Tvalue>::~Hmap() {
    for (int i = 0; i < TableSize; ++i) {
        Node* current = table[i];
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        table[i] = nullptr;
    }
}

template <typename Tvalue>
void Hmap<Tvalue>::insert(const int& key, const Tvalue& value) {
    int index = hash(key);
    if (table[index] == nullptr) {
        table[index] = new Node(key, value);
        mySize++;
    } else {
        Node* ptr = table[index];
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = new Node(key, value);
        mySize++;
    }
}

template <typename Tvalue>
int Hmap<Tvalue>::getMySize() {
    return mySize;
}

template <typename Tvalue>
int Hmap<Tvalue>::hash(const int& key) {
    return key % TableSize;
}

template <typename Tvalue>
void Hmap<Tvalue>::erase(const int& key) {
    int index = hash(key);
    if (table[index] == nullptr) {
        std::cerr << "INDEX ALREADY DOESN'T EXIST";
    } else if (table[index]->key == key) {
        Node* temp = table[index];
        table[index] = table[index]->next;
        delete temp;
        mySize--;
    } else {
        Node* current = table[index]->next;
        Node* prev = table[index];

        while (current != nullptr && current->key != key) {
            prev = current;
            current = current->next;
        }

        if (current != nullptr) {
            prev->next = current->next;
            delete current;
            mySize--;
        }
    }
}

template <typename Tvalue>
Tvalue Hmap<Tvalue>::search(const int key, bool& found) {
    Tvalue val;
    int index = hash(key);
    Node* ptr = table[index];

    while (ptr != nullptr) {
        if (ptr->key == key) {
            found = true;
            val = ptr->value;
            return val;
        }
        ptr = ptr->next;
    }

    found = false;
    return val;
}

template <typename Tvalue>
void Hmap<Tvalue>::display() {
    if (isEmpty())
        std::cerr << "EMPTY TABLE";
    else {
        for (int i = 0; i < TableSize; i++) {
            Node* ptr = table[i];
            while (ptr != nullptr) {
                std::cout << ptr->value << std::endl;
                ptr = ptr->next;
            }
        }
    }
}

template <typename Tvalue>
bool Hmap<Tvalue>::isEmpty() {
    return (mySize == 0);
}



/*
using namespace std;
#include <iostream>
class person
{

string name;
public:
int number;
person(int num, string n){
    number = num;
    name = n;
}

friend std::ostream& operator<<(std::ostream& os, const person& p) {
        os << p.number << " " << p.name;
        return os;
    }

};


int main(){
    Hmap<person> myList;

    person p1(1, "mazen");
    person p2(2, "yomna");
    person p3(3, "badr");
    person p4(4, "menna");
    myList.insert(p1.number,p1);
    myList.insert(p2.number,p2);
    myList.insert(p3.number,p3);
    myList.insert(p4.number,p4);
    myList.display();
}
*/



/*
int main() {
    Hmap<std::string> myMap;

    myMap.insert(1, "One");
    myMap.insert(2, "Two");
    myMap.insert(3, "Three");
    myMap.insert(13, "Thirteen");

    myMap.display();

    bool found = false;
    std::string value = myMap.search(2, found);
    if (found) {
        std::cout << "Found: " << value << std::endl;
    } else {
        std::cout << "Not found!" << std::endl;
    }

    myMap.erase(2);
    myMap.display();

    return 0;
}

*/









//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
/* 
    template < typename Tvalue>
    Hmap<Tvalue>::Node::Node() : key(0), value(Tvalue()) {}
 
 
    template <typename Tvalue>
    Hmap<Tvalue>::Node::Node(int key, Tvalue value){
        key = key;
        value = value;
        next = NULL;
    }
 
 
    template <typename Tvalue>
    Hmap<Tvalue>::Hmap() : mySize(0) {
    for (int i = 0; i < TableSize; i++)
        table[i] = nullptr;
}
 

template <typename Tvalue>
Hmap<Tvalue>::~Hmap() {
    for (int i = 0; i < TableSize; ++i) {
        Node* current = table[i];
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        table[i] = nullptr;
    }
}


template <typename Tvalue>
void Hmap<Tvalue>::insert(const int& key, const Tvalue& value) {
    int index = hash(key);
    if (table[index] == nullptr) {
        table[index] = new Node(key, value);
        mySize++;
    } else {
        Node* ptr = table[index];
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = new Node(key, value);
        mySize++;
    }
}
 
 
 
 
    template <typename Tvalue>
    int Hmap<Tvalue>:: getMySize(){
        return mySize;
    }
 
    template <typename Tvalue>
    int Hmap<Tvalue>:: hash(const int &key) {
        return key % TableSize;
}
 
 
   
template <typename Tvalue>
void Hmap<Tvalue>::erase(const int &key) {
    int index = hash(key);

    if (table[index] == NULL) {
        cerr << "INDEX ALREADY DOESN'T EXIST";
    } else if (table[index]->key == key) {
        Node *temp = table[index];
        table[index] = table[index]->next;
        delete temp;
        mySize--;
    } else {
        Node *current = table[index]->next;
        Node *prev = table[index];

        while (current != NULL && current->key != key) {
            prev = current;
            current = current->next;
        }

        if (current != NULL) {
            prev->next = current->next;
            delete current;
            mySize--;
        }
    }
}
 
 
 
template <typename Tvalue>
Tvalue Hmap<Tvalue>::search(const int key, bool& found) {
    Tvalue val;
    int index = hash(key);
    Node* ptr = table[index];

    while (ptr != nullptr) {
        if (ptr->key == key) {
            found = true;
            val = ptr->value;
            return val;
        }
        ptr = ptr->next;
    }

    found = false;
    return val;
}




template <typename Tvalue>
void Hmap<Tvalue>::display() {
    if (isEmpty())
        std::cerr << "EMPTY TABLE";
    else {
        for (int i = 0; i < TableSize; i++) {
            Node* ptr = table[i];
            while (ptr != nullptr) {
                std::cout << ptr->value << std::endl;
                ptr = ptr->next;
            }
        }
    }
}


    
 
 
    template <typename Tvalue>
    bool Hmap<Tvalue>::isEmpty(){
       
        //for (int i=0; i<TableSize; i++){
          //  if(table[i] != NULL) return false;
        //}
        return (mySize==0);
    }
 




    int main() {
    
    
    Hmap<string> myMap;

    myMap.insert(1, "One");
    myMap.insert(2, "Two");
    myMap.insert(3, "Three");
    myMap.insert(13, "Thirteen");

    myMap.display();

    bool found = false;
    string value = myMap.search(2, found);
    if (found) {
        cout << "Found: " << value << endl;
    } else {
        cout << "Not found!" << endl;
    }

    myMap.erase(2);
    myMap.display();

    return 0;
}

*/