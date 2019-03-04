#ifndef FloatWrapper_h
#define FloatWrapper_h

#include <iostream>
#include "Wrapper.h"

class FloatWrapper : public Wrapper {

public:

	FloatWrapper(float val) : value(val) {}
	virtual ~FloatWrapper() = default;

	virtual operator std::string() { return std::to_string(value); }
	virtual Wrapper * copyYourself() const {

		Wrapper *ptr = new FloatWrapper(value);
		return ptr;
	}

private:

	float value;

};

#endif
