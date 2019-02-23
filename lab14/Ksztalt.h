#ifndef Ksztalt_h
#define Ksztalt_h

#include <iostream>

/* @class Ksztalt hierarchia dziedziczenia wynika z linijek 27-29 oraz 32 pliku stest.cpp */

class Ksztalt {

public:

    Ksztalt() = default;
	/* @fn polePow kazda klasa pochodna posiada swoja wersje tej funkcji
	 * @return pole powierzchni figury
	 */
	virtual double polePow() const = 0;

	/* @fn wypisz kazda klasa pochodna posiada swoja wersje tej funkcji
	 * @param buf wysylany strumien
	 * @brief wypis figury i jej parametrow na wybrany strumien
	 */
    virtual void wypisz(std::ostream &buffer) const = 0;
	virtual ~Ksztalt() = default;

};

/* @fn wypisz 
 * @brief zachowa sie polimorficznie w stosunku do ksztaltow pochodnych
 */
inline void wypisz(const Ksztalt &shape) { shape.wypisz(std::cout); }

#endif
