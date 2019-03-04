#include "List.h"

List::List(const List &list) {

    if(list.head) {

        const Node *ptr = list.head;

        while(ptr) {

            insert(ptr->data());
            ptr = ptr->whichNext();
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

    Node *inserted = new Node(value);

    if(head) {

        if(where == Begin) {

            inserted->setNext(head);
            head = inserted;

		}
		else {

            tail->setNext(inserted);
            tail = inserted;
		}
	}
	else 
        head = tail = inserted;

	return *this;
}

void List::print() const {

    std::cout << "[  ";

    const Node *ptr = head;

    while(ptr) {

        ptr->data().print();
        ptr = ptr->whichNext();
	}

	std::cout << "]\n";
}

//const Node * List::find(const Data &value) const {

//    const Node *ptr = head;

//    while(ptr) {

//        if(ptr->data() == value)
//            return ptr;

//        ptr = ptr->whichNext();
//	}

//    return ptr;
//}
