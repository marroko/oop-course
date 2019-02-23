#ifndef List_h
#define List_h

#include <cstring>

typedef struct Node {

	char *data;
    Node *next;

} Node;

typedef struct List {

    Node *head;

} List;

void prepare(List *list);

void add(List *list, const char *buffer);

void clear(List *list);

int empty(const List *ptr);

void dump(const List *ptr);

#endif
