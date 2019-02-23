#include "Trojkat.h"

Trojkat::Trojkat(int a, int b, int c) : _a(a), _b(b), _c(c) {}

double Trojkat::polePow() const {

	double x = (_a + _b + _c) / 2.0;

	return sqrt(x*(x-_a)*(x-_b)*(x-_c));
}

void Trojkat::wypisz(std::ostream &buffer) const {

    buffer << "Trojkat o bokach: " << _a << " " << _b << " " << _c << std::endl;
}
