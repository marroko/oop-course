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

Element * Dir::get(std::string directory) {

	for(int i=0; i<countElements; ++i) {

		if(subElements[i]->getName() == directory)
			return subElements[i];
	}

	return nullptr;
}
