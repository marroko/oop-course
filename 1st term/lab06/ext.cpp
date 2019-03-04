#include <iostream>
#include "ext.h"

inline int increaseByFive(int size) { return size+5; }

void init(Ext *vector) {

    initWithSizeAndPolicy(vector, 5, increaseByFive);

}

void initWithSizeAndPolicy(Ext *vector, int places, int (*function)(int)) {

    vector->data = new int[places]();
    vector->capacity = places;
    vector->allocator = function;
    vector->size = 0;
}

int capacity(Ext *vector) {

    if(size(vector) == vector->capacity) {

		int tab[25]; 

        for(int i=0; i<size(vector); i++)
            tab[i] = at(vector, i);

        int newCapacity = vector->allocator(size(vector));

        clear(vector);
				
        vector->data = new int[newCapacity]();
        vector->capacity = newCapacity;

        for(int i=0; i<size(vector); i++)
            vector->data[i] = tab[i];

	}

    return vector->capacity;
}

void insert(Ext *vector, int value) {

    vector->size++;
    vector->data[size(vector)-1] = value;

}
