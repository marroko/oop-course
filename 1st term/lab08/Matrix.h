#ifndef Matrix_h
#define Matrix_h

#include "Vector.h"

class Matrix {

public:
	
    Matrix(int r, int c, int values);
	~Matrix();

    Vector & at(int whichRow) { return array[whichRow]; }
	void print() const;

private:
	
    int rows;
    int columns;
    Vector *array;
};

#endif
