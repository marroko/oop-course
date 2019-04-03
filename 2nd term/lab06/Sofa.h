#ifndef Sofa_h
#define Sofa_h

#include <iostream>
#include "Mebel.h"

class Sofa : virtual public Mebel {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const Sofa &furniture) { 

		furniture.print(buffer);
	 	return buffer;
	 }

	Sofa(int w, int h, int l, int s) : Mebel(w, h, l), sedentary(s) {} // if Mebel...Sofa(s) then error - delegating doesn't work
	Sofa(int s = 0) : sedentary(s) {}
	virtual ~Sofa() { std::cout << "~Sofa\n"; }

	virtual void print(std::ostream &b) const;

protected:

	const int sedentary;

};

void Sofa::print(std::ostream &b) const {

	b << "Sofa: ";
	Mebel::print(b);
	b << " siedzisko: " << sedentary;
}

#endif
