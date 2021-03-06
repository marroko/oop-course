#ifndef File_h
#define File_h

#include "Element.h"

class File : public Element {

public:

	virtual void print(std::ostream &buffer, int spaces) const;

	File(std::string n) : Element(n) {}
	virtual ~File() = default;

};

void File::print(std::ostream &buffer, int spaces) const {

	for(int i=0; i<spaces; ++i)
		buffer << " ";

	buffer << this->getName() << '\n';
}

#endif
