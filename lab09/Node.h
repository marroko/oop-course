#ifndef Node_h
#define Node_h

class Node {

public:

    Node(int insertValue);

    int data() const { return value; }
    Node * whichNext() { return next; }
    void setNext(Node *insertNode) { next = insertNode; }

    const Node * whichNext() const;

private:

    int value;
    Node *next = nullptr;

};

#endif
