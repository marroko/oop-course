#ifndef List_h
#define List_h

#include "Node.h"
#include "Data.h"
#include <iostream>

class List {

public:

    enum whereToInsert {Begin, End};

    List(const List &list);
    List() = default;
    ~List();

    void print() const;
    List & insert(const Data &value, whereToInsert where = End);
    const Node * find(const Data &value) const;

private:

    Node *head = nullptr;
    Node *tail = nullptr;

};

#endif
