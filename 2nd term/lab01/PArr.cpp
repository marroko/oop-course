#include <iostream>
#include "PArr.h"

std::ostream & operator<<(std::ostream &buffer, const PArr &polArray) {

	for(int i=0; i<polArray.getSize(); i++)
		buffer << static_cast<std::string>( *(polArray.array[i]) ) << " ";

	return buffer;
}

PArr & PArr::operator=(const PArr &copied) {

	if(this == &copied)
		return *this;

	for(int i=0; i<size; ++i)
		delete array[i];

	delete [] array;

	this->size = copied.size;
	this->array = new Wrapper*[size];

	for(int i=0; i<size; ++i)
		this->array[i] = copied[i]->copyYourself();

	return *this;
}

PArr::~PArr() {

	for(int i=0; i<size; ++i)
		delete array[i];

	delete [] array;
}