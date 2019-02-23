#include <iostream>
#include "itr.h"

itr::itr(int *begin, int count) : ptr(begin), howMany(count) {}

void itr::operator++() {

    ptr++;
    howMany--;
}
