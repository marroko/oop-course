#include <iostream>
#include "Matrix.h"
#include "Vector.h"

Matrix::Matrix(int r, int c, int values) : rows(r), columns(c) {

    array = new Vector[rows];

    for(int i = 0; i < rows; i++) {
        array[i].getSize() = columns;

        for(int j = 0; j < columns; j++)
            array[i].at(j) = values;
	}
}

Matrix::~Matrix() {

    if(array) {

        delete [] array;
        array = nullptr;
    }
}

void Matrix::print() const {

    for(int i=0; i<columns; i++) {

        array[i].print();
		
		std::cout << "\n";
	}
}



