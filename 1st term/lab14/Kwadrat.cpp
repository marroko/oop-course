#include "Kwadrat.h"

Kwadrat::Kwadrat(int a) : _a(a) {}

void Kwadrat::wypisz(std::ostream &buffer) const {

    buffer << "Kwadrat o boku: " << _a << std::endl;
}
