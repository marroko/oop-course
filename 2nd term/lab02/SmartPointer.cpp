#include <iostream>
#include "SmartPointer.h"

SmartPointer::SmartPointer(TestClassA *ptr) :  _ptr(ptr), refCount(new int(1)) {}

SmartPointer::SmartPointer(SmartPointer &copied) {

	_ptr = new TestClassA(copied.name());
	copied.increaseCount();
	refCount = copied.getRef();
}

SmartPointer::~SmartPointer() {

	this->decreaseCount();

	if(*refCount == 0) {

		delete _ptr;
		delete refCount;
	}
}

SmartPointer & SmartPointer::operator=(SmartPointer &copied) {

	if(this == &copied)
		return *this;

	this->decreaseCount();

	if(*refCount == 0) {

		delete _ptr;
		delete refCount;
	}

	copied.increaseCount();

	_ptr = copied.getPtr();
	refCount = copied.getRef();

	return *this;
}
