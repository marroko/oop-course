#ifndef Operations_h
#define Operations_h

#include "OneArg.h"
#include "TwoArg.h"

/* @struct AND reprezentuje logiczna koniunkcje 
   @brief hierarchia dziedziczenia wynika z linii 21-27 oraz z implementacji funkcji p2 */

struct AND : TwoArg {

	AND() = default;
	virtual ~AND() = default;

	virtual bool result(bool value1, bool value2) const override { return value1 && value2; }
	
};

/* @struct OR reprezentuje logiczna alternatywe 
   @brief hierarchia dziedziczenia wynika z linii 19-20 oraz z implementacji funkcji p2 */

struct OR : TwoArg {

	OR() = default;
	virtual ~OR() = default;

	virtual bool result(bool value1, bool value2) const override { return value1 || value2; }
	
};

/* @struct NOT reprezentuje logiczne zaprzeczenie 
   @brief hierarchia dziedziczenia wynika z linii 24 */

struct NOT : OneArg {

	NOT() = default;
	virtual ~NOT() = default;

	virtual bool result(bool value) const override { return !value; }
	
};

#endif