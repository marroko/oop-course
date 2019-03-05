#include "List.h"

List::List(const List &list) {

    if(list.head) {

        const Node *pointer = list.head;

        while(pointer) {

            Node *newNode = new Node;
            newNode->ptr = pointer->ptr->copy();

            if(head) {

                tail->next = newNode;
                tail = newNode;
            }
            else
                head = tail = newNode;

            pointer = pointer->next;
        }
    }
}

List::~List() {

    Node *current = head;
    Node *previous = tail;

    while(current) {

        previous = current->whichNext();
        delete current;
        current = previous;
	}
}

List & List::insert(const Data &value, whereToInsert where) {

    Node *newNode = new Node;
    newNode->ptr = value.copy();

    if(head) {

        if(where == Begin) {

            newNode->next = head;
            head = newNode;

		}
		else {

            tail->next = newNode;
            tail = newNode;
		}
	}
	else 
        head = tail = newNode;

	return *this;
}

void List::print() const {

    std::cout << "[  ";

    const Node *pointerList = head;

    while(pointerList) {

        pointerList->ptr->print();
        pointerList = pointerList->next;
	}

	std::cout << "]\n";
}

bool List::find(const Data &data) const {

    bool ifFound = false;
    Node *iterator = head;

    while(iterator)
    {
        if(iterator->ptr->equal(&data))
        {
            ifFound = true;
            break;
        }

        iterator = iterator->next;
    }

    return ifFound;
}
