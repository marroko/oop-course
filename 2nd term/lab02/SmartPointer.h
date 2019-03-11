#ifndef SmartPointer_h
#define SmartPointer_h

#include "TestClassA.h"

class SmartPointer {

public:

	SmartPointer(TestClassA *ptr);
	SmartPointer(SmartPointer &copied);
	~SmartPointer();

	SmartPointer & operator=(SmartPointer &copied);
	TestClassA & operator*() const { return *_ptr; }
	TestClassA * operator->() const { return _ptr; }

	std::string name() { return _ptr->name(); }
	void decreaseCount() { (*refCount)--; }
	void increaseCount() { (*refCount)++; }
	TestClassA *& getPtr() { return _ptr; }
	int *& getRef() { return refCount; }

private:

	TestClassA *_ptr;
	int *refCount;

};

#endif
