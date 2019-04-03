#ifndef Lozko_h
#define Lozko_h

#include <iostream>
#include "Mebel.h"

class Lozko : virtual public Mebel {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const Lozko &furniture) { 

		furniture.print(buffer);
	 	return buffer;
	}

	Lozko(int w, int h, int l, int s) : Mebel(w, h, l), sleepSurface(s) {} // if Mebel...Lozko(s) then error - delegating doesn't work
	Lozko(int s = 0) : sleepSurface(s) {}
	virtual ~Lozko() { std::cout << "~Lozko\n"; }

	virtual void print(std::ostream &b) const;

protected:

	const int sleepSurface;

};

void Lozko::print(std::ostream &b) const {

	b << "Lozko: "; 
	Mebel::print(b);
	b << " sz.spania: " << sleepSurface;
}

#endif
