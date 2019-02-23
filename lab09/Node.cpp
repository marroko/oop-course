#include <iostream>
#include "Node.h"

Node::Node(int insertValue) : value(insertValue) {}

const Node * Node::whichNext() const {

    Node *tmp = next;
    return tmp;
}
