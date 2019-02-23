#include <iostream>
#include "List.h"

void prepare(List *list) {

    list->head = nullptr;
}

void add(List *list, const char *buffer) {

    if(empty(list)) {

        list->head = new Node;
        list->head->data = new char[strlen(buffer) + 1];

        strcpy(list->head->data, buffer);

        list->head->data[strlen(buffer)] = '\0';
        list->head->next = nullptr;
	}
	else {
        Node *ptr = list->head;

        while(ptr->next)
            ptr = ptr->next;

        ptr->next = new Node;
        ptr->next->data = new char[strlen(buffer) + 1];

        strcpy(ptr->next->data, buffer);

        ptr->next->data[strlen(buffer)] = '\0';
        ptr->next->next = nullptr;
	}
}

void clear(List *list) {

    if(empty(list))
		return;

    Node *ptr = list->head;
    Node *helpful;

    while(ptr) {

        helpful = ptr->next;

        delete [] ptr->data;
        delete ptr;

        ptr = helpful;
	}

    list->head = nullptr;

}

int empty(const List *ptr) {

    return (ptr->head ? 0 : 1);
}

void dump(const List *ptr) {

    if(empty(ptr))
		return;

    const Node *help = ptr->head;

    while(help) {

        std::cout << help->data << " ";
        help = help->next;
	}
}
