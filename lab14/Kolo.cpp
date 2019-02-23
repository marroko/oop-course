#include "Kolo.h"

Kolo::Kolo(int r) : _r(r) {}

void Kolo::wypisz(std::ostream &buffer) const {

    buffer << "Kolo o promieniu: " << _r << std::endl;
}
