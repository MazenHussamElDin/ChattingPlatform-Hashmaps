/*
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <cstring>
#include <iterator>
 
using namespace std;
 
//const int DoubleHashVal=7;
 
template <typename Tvalue>
class Hmap
{

 public:
const static int TableSize=11;

private:
 
    class Node{
    public:
        int key;
        Node* next;
        Tvalue value;
        Node();
        Node(int key, Tvalue value); //SHELT NODE* EL KANT HENA 3SHAN N INITIALIZE B NULL
    };
   
    //int numberOfElements;
    int mySize;
    Node* table[TableSize];
    int hash(const int &key);
 
   public:
    Hmap();
    ~Hmap();
    int getMySize();
    void insert(const int &key , const Tvalue &value);
    
    void erase(const int &key);
    Tvalue search(const int key, bool& found); //khaleet found hena by reference
    void display();
    bool isEmpty();
   
 
    
 
 
 
 
   
};

*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <cstring>
#include <iterator>
 
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

