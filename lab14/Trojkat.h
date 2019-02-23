#ifndef Trojkat_h
#define Trojkat_h

#include "Ksztalt.h"
#include <math.h>

class Trojkat : public Ksztalt {

public:

	Trojkat(int a, int b, int c);
    ~Trojkat() = default;

	double polePow() const;
    void wypisz(std::ostream &buffer) const;

private:

	int _a;
	int _b;
	int _c;

};

#endif
