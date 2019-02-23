#include <iostream>
#include "Vector.h"
#include "Matrix.h"

Vector::Vector(int count, double values) : size(count) {

    data = new double[count];
	
    for (int i = 0; i < count; i++)
        data[i] = values;
}

Vector::Vector() {

    data = new double[4];
}

Vector::~Vector() {

    if(data) {

        delete [] data;
        data = nullptr;
    }
}

void Vector::mul(int howMany) {

    for(int i=0; i<size; i++)
        data[i] *= howMany;
}

void Vector::print() const {

    for(int i=0; i<size; i++)
        std::cout << data[i] << " ";
}

Vector & Vector::add(int howMany) {

    for(int i=0; i<size; i++)
        data[i] += howMany;

	return *this;
}

void Vector::add(Vector & addedVec) {

    for(int i=0; i<size; i++)
        data[i] += addedVec.data[i];
}

