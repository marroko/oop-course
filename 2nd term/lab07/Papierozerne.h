#ifndef Papierozerne_h
#define Papierozerne_h

#include <iostream>
#include "Urzadzenie.h"

// @brief dziedziczenie wynika z linii 33 i przewidywanego outputu z funkcji print
class Papierozerne : virtual public Urzadzenie {

public:

	Papierozerne() = default;
	virtual ~Papierozerne() = default;

};

#endif
