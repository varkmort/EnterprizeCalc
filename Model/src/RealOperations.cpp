#include "RealOperations.hpp"


namespace Model {

	Addition::Addition() :Operation("+") {}

	double Addition::execute(double a, double b) const {
		return a + b;
	}

	Subtraction::Subtraction() :Operation("-") {}

	double Subtraction::execute(double a, double b) const {
		return a - b;
	}

	Multiply::Multiply() :Operation("*") {}

	double Multiply::execute(double a, double b) const {
		return a*b;
	}
}