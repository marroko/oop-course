#include "Executor.h"


namespace Executor{

	Result secureRun(const Function &fun, const double x) {

		Result result;

		try {

			result.value = fun(x);
			result.valid = true;
		}
		catch(const bool & exc) {

			result.problem = "Boolean of value false thrown";
		}
		catch(const char * exc) {

			std::cout << "ERROR " << exc;
		}

		return result;
	}


	Result::operator double() const {

		if(valid)
			return value;
		else
			throw "There is no value in this object.";
	}
}

std::ostream & operator<<(std::ostream &buffer, const Executor::Result &result) {

	if(result.valid)
		buffer << result.value;
	return buffer;
}