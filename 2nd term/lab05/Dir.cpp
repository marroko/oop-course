#include "Dir.h"

std::ostream & operator<<(std::ostream &buffer, const Dir &directory) {

	directory.print(buffer, 0);
	return buffer;
}

Dir::~Dir() {

	std::cout << "Deleting Dir: " << this->name << '\n';

	for(int i=0; i<countElements; ++i) {
		std::cout << "About to delete " << subElements[i]->getName() << '\n';
		delete subElements[i];
	}
}

void Dir::print(std::ostream &buffer, int spaces) const {

	for(int i=0; i<spaces; ++i)
		buffer << " ";

	buffer << this->getName() << '\n';

	for(int i=0; i<countElements; ++i)
		subElements[i]->print(std::cout, spaces+2);
}

void Dir::operator+=(Element *e) {

	this->subElements[countElements] = e;
	this->countElements++;

	e->setUpDirectory(this);
}

Element * Dir::get(std::string element) {

	for(int j=0; j<countElements; ++j) {

		if(subElements[j]->getName() == element)
			return subElements[j];
	}

	Element *ptr = subElements[0]->get(element);

	return ptr;
}

Dir * Dir::findDir(std::string name) {

	Element *tmp = nullptr;
	Dir *ptr = nullptr;

	for(int i=0; i<countElements; ++i) {

		if(subElements[i]->getName() == name)
			return dynamic_cast<Dir *>(subElements[i]);
		else
			tmp = subElements[i]->get(name);

		if(tmp)
			ptr = dynamic_cast<Dir *>(tmp);
	}
	return ptr;
}

void Dir::add(Element *added) {

	*this += added;
}
