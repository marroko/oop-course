#ifndef Drukarka_h
#define Drukarka_h

#include <iostream>
#include "Papierozerne.h"

/* @brief dziedziczenie wynika z linii 33-34, 
   @brief drukarka jest urzadzeniem wymagajacym papieru (Papierozerne jest urzadzeniem) */
class Drukarka : virtual public Papierozerne {

public:

	Drukarka(const Rozdzielczosc &d1) : display(d1) {}
	virtual ~Drukarka() = default;

	virtual std::string rodzaj() const { return "Drukarka"; }
	Rozdzielczosc rozdzielczosc() const { return display; }

private:

	Rozdzielczosc display;

};

#endif
