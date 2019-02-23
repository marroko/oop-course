#include "Node.h"

Node::Node(const Data &insertData) : ref(insertData) {}

const Node * Node::whichNext() const {

    Node *tmp = next;
    return tmp;
}
