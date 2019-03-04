#ifndef Wrapper_h
#define Wrapper_h

#include <iostream>
#include "Wrapper.h"

class Wrapper {

public:

	Wrapper() = default;
	virtual ~Wrapper() = default;

	virtual operator std::string() = 0;
	virtual Wrapper * copyYourself() const = 0;

private:

	

};

#endif
