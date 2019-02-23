#ifndef foreach_h
#define foreach_h

#include <iostream>
#include <functional>
#include "itr.h"

/* @fn foreach
 * @param iterator obiekt uzyty do iteracji po danej tablicy intow
 * @param funktor obiekt zmieniany na podstawie elementow dostarczanych przez iterator
 */
void foreach(itr iterator, std::function<void(int)> functor) {

    while(iterator) {

        functor(*iterator);
        ++iterator;
    }
}

#endif
