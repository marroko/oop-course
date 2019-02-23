#ifndef Node_h
#define Node_h

#include "Data.h"

class Node {

public:

    Node(const Data &insertValue);

    const Data & data() const { return ref; }
    Node * whichNext() { return next; }
    void setNext(Node *insertNode) { next = insertNode; }

    const Node * whichNext() const;

private:

    const Data &ref;
    Node *next = nullptr;

};

#endif
