#ifndef Ksero_h
#define Ksero_h

#include <iostream>
#include "Papierozerne.h"

/* @brief dziedziczenie wynika z linii 33, 35
   @brief ksero jest urzadzeniem wymagajacym papieru (Papierozerne jest urzadzeniem) */
class Ksero : virtual public Papierozerne {

public:

	Ksero() = default;
	virtual ~Ksero() = default;

	//@fn rodzaj 
	//@brief zwraca rodzaj urzadzenia
	virtual std::string rodzaj() const { return "Ksero"; }

};

#endif
