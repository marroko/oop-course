#ifndef Kolo_h
#define Kolo_h

#include "Ksztalt.h"

class Kolo : public Ksztalt {

public:

    Kolo(int r);
    ~Kolo() = default;

    double polePow() const { return (3.1415 * _r * _r); }
    void wypisz(std::ostream &buffer) const;

private:

    int _r;

};

#endif
