#ifndef Dir_h
#define Dir_h

#include "Element.h"

class Dir : public Element {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const Dir &directory);
	virtual void print(std::ostream &buffer, int spaces) const;

	Dir(std::string n) : Element(n) {}
	~Dir();

	void operator+=(Element *element);

	Element * get(std::string directory);

private:

	Element *subElements[10];
	int countElements = 0;

};

#endif
