#ifndef Logical_h
#define Logical_h

#include "OneArg.h"
#include "TwoArg.h"
#include "Operations.h"

/* @struct Logical dostarcza statyczne metody symulujace wynik operacji logicznych */

struct Logical {

	typedef const TwoArg cTA;
	typedef const OneArg cOA;

	static bool eval(cTA &operation, bool value1, bool value2) { return operation.result(value1, value2); }
	static bool eval(cOA &operation, bool value) { return operation.result(value); }

};

#endif
