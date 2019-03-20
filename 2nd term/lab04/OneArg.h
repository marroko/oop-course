#ifndef OneArg_h
#define OneArg_h

/* @struct OneArg struktura abstrakcyjna dostarczajaca interfejs
				  dla jednoargumentowych operacji logicznych */

struct OneArg {

	OneArg() = default;
	virtual ~OneArg() = default;

	virtual bool result(bool value) const = 0;

};

#endif
