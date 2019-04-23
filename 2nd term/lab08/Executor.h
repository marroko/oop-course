#pragma once
#include <iostream>

namespace Executor {

	struct Function {

		virtual double operator()(double x) const = 0;
		virtual ~Function() = default;
	};


	struct Result {

		Result(const double val = 0) : value(val) {} 
		operator double() const;

		double value;
		bool valid = false;
		std::string problem = "";
	};

	Result secureRun(const Function &fun, const double x);

}

std::ostream & operator<<(std::ostream &buffer, const Executor::Result &result);