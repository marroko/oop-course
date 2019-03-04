#ifndef Kwadrat_h
#define Kwadrat_h

#include "Ksztalt.h"

class Kwadrat : public Ksztalt {

public:

    Kwadrat(int a);
    ~Kwadrat() = default;

    double polePow() const { return (_a * _a); }
    void wypisz(std::ostream &buffer) const;

private:

    int _a;

};

#endif
