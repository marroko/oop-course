#ifndef Mebel_h
#define Mebel_h

#include <iostream>

class Mebel {

public:

	friend std::ostream & operator<<(std::ostream &buffer, const Mebel &furniture) { 

		furniture.print(buffer);
	 	return buffer;
	 }

	Mebel(int w = 0, int h = 0, int l = 0) : width(w), height(h), length(l) {}
	virtual ~Mebel() { std::cout << "~Mebel\n"; }

	virtual void print(std::ostream &b) const;

protected:

	const int width;
	const int height;
	const int length;

};

void Mebel::print(std::ostream &b) const { 

	b << "Mebel: sz:" << width << " " << "wys:" << height << " " << "dl:" << length; 
}

#endif

