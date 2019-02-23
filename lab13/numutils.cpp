#include <iostream>
#include "numutils.h"

void numutils::average::operator()(int wartosc) {

    sum += wartosc;
    howMany++;
}
