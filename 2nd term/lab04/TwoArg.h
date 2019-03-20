#ifndef TwoArg_h
#define TwoArg_h

/* @struct OneArg struktura abstrakcyjna dostarczajaca interfejs
				  dla dwuargumentowych operacji logicznych */

struct TwoArg {

	TwoArg() = default;
	virtual ~TwoArg() = default;

	virtual bool result(bool value1, bool value2) const = 0;

};

#endif
