#ifndef Skaner_h
#define Skaner_h

#include <iostream>
#include "Urzadzenie.h"
#include "Rozdzielczosc.h"

// @brief dziedziczenie wynika z linii 25-26, skaner jest urzadzeniem, ale nie wymaga papieru
class Skaner : virtual public Urzadzenie {

public:

	Skaner(const Rozdzielczosc &d1) : display(d1) {}
	virtual ~Skaner() = default;

	/* @fn rodzaj 
	  @brief zwraca rodzaj urzadzenia */
	virtual std::string rodzaj() const { return "Skaner"; }
	Rozdzielczosc rozdzielczosc() const { return display; }

private:

	Rozdzielczosc display;

};

#endif
