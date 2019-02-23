#include <iostream>
#include "fstore.h"

int init(fstore *ptr,  int (*ptrFunction)(int), int arg) {
	
    ptr->pointer = ptrFunction;
    ptr->argument = arg;

	return 0;
}

int call(fstore *ptr) {

    return ptr->pointer(ptr->argument);
}

int callWithArg(fstore *ptr, int arg) {

    ptr->argument = arg;
    return call(ptr);
}
