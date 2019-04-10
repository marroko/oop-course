#ifndef Urzadzenie_h
#define Urzadzenie_h

#include "Rozdzielczosc.h"

// @class Urzadzenie abstrakcyjna dostarczajaca interfejsu
class Urzadzenie {

public:

	Urzadzenie() = default;
	virtual ~Urzadzenie() = default;
	
	/*@fn rodzaj 
	  @brief pozwala przeciazyc funkcje zwracajaca rodzaj urzadzenia dla obiektow pochodnych */
	virtual std::string rodzaj() const = 0;

};

#endif
