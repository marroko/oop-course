#ifndef IntWrapper_h
#define IntWrapper_h

#include <iostream>
#include "Wrapper.h"

class IntWrapper : public Wrapper {

public:

	IntWrapper(int val) : value(val) {}
	virtual ~IntWrapper() = default;

	virtual operator std::string() { return std::to_string(value); }
	virtual Wrapper * copyYourself() const {

		Wrapper *ptr = new IntWrapper(value);
		return ptr;
	}

private:

	int value;

};

#endif
