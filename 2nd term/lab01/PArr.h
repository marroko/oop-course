#ifndef PArr_h
#define PArr_h

#include "Wrapper.h"

class PArr {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const PArr &polArray);

	PArr(int s) : size(s), array(new Wrapper*[s]) {} 
	~PArr();

	Wrapper *& operator[](int index) { return array[index]; }
	const Wrapper * operator[](int index) const { return array[index]; }
	PArr & operator=(const PArr &copied);

	int getSize() const { return size; }

private:

	int size;
	Wrapper **array;

};

#endif
