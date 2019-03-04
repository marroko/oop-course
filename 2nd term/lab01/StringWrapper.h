#ifndef StringWrapper_h
#define StringWrapper_h

#include <iostream>
#include "Wrapper.h"

class StringWrapper : public Wrapper {

public:

	StringWrapper(std::string txt) : text(txt) {}
	virtual ~StringWrapper() = default;

	virtual operator std::string() { return text; }
	virtual Wrapper * copyYourself() const {

		Wrapper *ptr = new StringWrapper(text);
		return ptr; 
	}

private:

	std::string text;

};

#endif
