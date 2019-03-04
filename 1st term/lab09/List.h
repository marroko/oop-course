#ifndef List_h
#define List_h

#include "Node.h"

class List {

public:

    enum whereToInsert {Begin, End};

    List(const List &list);
    List() = default;
    ~List();

    const Node * find(int value) const;
    void print() const;
    List & insert(int value, whereToInsert where = End);

private:

    Node *head = nullptr;
    Node *tail = nullptr;

};

#endif
