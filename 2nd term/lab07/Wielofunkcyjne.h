#ifndef Wielofunkcyjne_h
#define Wielofunkcyjne_h

#include <iostream>
#include "Ksero.h"
#include "Skaner.h"
#include "Drukarka.h"

/* @brief dziedziczenie wynika z linii 33-36
   @brief urzadzenie wielofunkcyjne posiada funkcje ksera, drukarki i skanera */
class Wielofunkcyjne :  public Ksero, public Drukarka, public Skaner {

public:

	/* @fn Wielofunkcyjne
	   @param d1 rozdzielczosc dla drukarki w urzadzeniu wielofunkcyjnym
	   @param d2 rozdzielczosc dla skanera w urzadzeniu wielofunkcyjnym */
	Wielofunkcyjne(const Rozdzielczosc &d1, const Rozdzielczosc &d2) : Drukarka(d1), Skaner(d2) {}
	virtual ~Wielofunkcyjne() = default;

	/*@fn rodzaj 
	  @brief zwraca rodzaj urzadzenia */
	virtual std::string rodzaj() const { return "Wielofunkcyjne"; }

};

#endif
