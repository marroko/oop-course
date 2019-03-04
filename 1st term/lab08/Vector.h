#ifndef Vector_h
#define Vector_h

class Vector {

public:

    Vector(int count, double values);
	Vector();
	~Vector();

    void mul(int howMany);
    void print() const;
    Vector & add(int howMany);
    void add(Vector & addedVec);

    double & at(int position) { return data[position]; }
    int & getSize() { return size; }

private:

    int size;
    double *data;

};

#endif
