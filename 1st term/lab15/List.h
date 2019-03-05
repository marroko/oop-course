#ifndef List_h
#define List_h

#include "Data.h"

struct Node {

    Node(Data *insertData) : ptr(insertData) {}
    Node() = default;

    Node * whichNext() { return next; }
    void setNext(Node *insertNode) { next = insertNode; }

    const Node * whichNext() const { Node *tmp = next;
                                     return tmp; }

    Data *ptr;
    Node *next = nullptr;

};

class List {

public:

    enum whereToInsert {Begin, End};

    List(const List &list);
    List() = default;
    ~List();

    void print() const;
    List & insert(const Data &value, whereToInsert where = End);
    bool find(const Data &data) const;

private:

    Node *head = nullptr;
    Node *tail = nullptr;

};

#endif
