#ifndef Element_h
#define Element_h

#include <iostream>
#include <string>

class Element {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const Element &element);

	virtual void print(std::ostream &buffer, int spaces) const = 0;
	virtual ~Element() = default;

	Element(std::string n) : name(n) {}

	void setUpDirectory(Element *element) { upDirectory = element; }

	std::string getName() const { return name; }

protected:

	std::string name;
	Element *upDirectory = nullptr;

};

#endif
