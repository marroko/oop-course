#ifndef Rozdzielczosc_h
#define Rozdzielczosc_h

#include <iostream>

// @struct Rozdzielczosc pomocnicza wypisywalna do przechowywania rozdzielczosci urzadzen
struct Rozdzielczosc {

	friend std::ostream & operator<<(std::ostream &buffer, const Rozdzielczosc &display) { buffer << display._x << "x" << display._y; return buffer; }

	Rozdzielczosc(const int x = 0, const int y = 0) : _x(x), _y(y) {}
	~Rozdzielczosc() = default;

	const int _x;
	const int _y;

};

#endif
