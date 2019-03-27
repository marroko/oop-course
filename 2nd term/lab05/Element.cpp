#include "Element.h"

std::ostream & operator<<(std::ostream &buffer, const Element &element) {

	element.print(buffer, 0);
	return buffer;
}