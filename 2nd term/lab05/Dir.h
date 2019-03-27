#ifndef Dir_h
#define Dir_h

#include "Element.h"

class Dir : public Element {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const Dir &directory);

	Dir(std::string n) : Element(n) {}
	virtual ~Dir();

	virtual void print(std::ostream &buffer, int spaces) const;
	virtual Element * get(std::string element) override;
	void add(Element *added);
	void operator+=(Element *element);
	Dir * findDir(std::string name);

private:

	Element *subElements[10];
	int countElements = 0;

};

#endif
