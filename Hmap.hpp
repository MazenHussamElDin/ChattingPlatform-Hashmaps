

#include <iostream>
#include <cstring>

#include"Chat.hpp"

using namespace std;

template <typename Tvalue>
class Hmap {
public:
    const static int TableSize = 11;

private:
    class Node {
    public:
        int key;
        Node* next;
        Tvalue value;
        Node();
        Node(int key, Tvalue value);
    };

    int mySize;
    Node* table[TableSize];

    int hash(const int& key);

public:
    Hmap();
    ~Hmap();

    int getMySize();
    void insert(const int& key, const Tvalue& value);
    void erase(const int& key);
    Tvalue search(const int key, bool& found);
    void display();
    bool isEmpty();
};

