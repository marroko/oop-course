#ifndef Element_h
#define Element_h

#include <iostream>
#include <string>

class Element {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const Element &element);

	Element(std::string n) : name(n) {}
	virtual ~Element() = default;

	virtual void print(std::ostream &buffer, int spaces) const = 0;
	virtual Element * get(std::string element) = 0;
	void setUpDirectory(Element *element) { upDirectory = element; }
	std::string getName() const { return name; }

protected:

	std::string name;
	Element *upDirectory = nullptr;

};

#endif
