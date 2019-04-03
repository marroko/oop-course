#ifndef Kanapa_h
#define Kanapa_h

#include <iostream>
#include "Sofa.h"
#include "Lozko.h"

struct Kanapa : public Sofa, public Lozko {

	friend std::ostream & operator<<(std::ostream &buffer, const Kanapa &furniture) { 

		furniture.print(buffer);
	 	return buffer;
	 }

	Kanapa(int w, int h, int l, int s, int sS) : Mebel(w, h, l), Sofa(s), Lozko(sS) {}
	virtual ~Kanapa() { std::cout << "~Kanapa\n"; }

	virtual void print(std::ostream &b) const;

};

void Kanapa::print(std::ostream &b) const { 

	b << "jako ";
	Mebel::print(b);
	b << "\n jako ";
	Sofa::print(b);
	b << "\n jako ";
	Lozko::print(b);
}

#endif
