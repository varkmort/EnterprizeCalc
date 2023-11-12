#include "RealOperations.hpp"


namespace Model {

	Addition::Addition() :Operation("+") {}

	double Addition::execute(double a, double b) const {
		//если очень хочется огребать на работе
		//static int i = 0;
		//if (i == 0) {
		//	i++;
		//	return 0.0;
		//}
		//if (i == 1) {
		//	i++;
		//	return 10.0;
		//}
		//if (i == 2) {
		//	i++;
		//	return 0.0;
		//}		
		//if (i == 3) {
		//	i++;
		//	return 0.0;
		//}
		//if (i == 4) {
		//	i++;
		//	return -10.0;
		//}
		return a+b;

	}

	Subtraction::Subtraction() :Operation("-") {}

	double Subtraction::execute(double a, double b) const {
		return a - b;
	}

	Multiply::Multiply() :Operation("*") {}

	double Multiply::execute(double a, double b) const {
		return a*b;
	}

	Division::Division():Operation("/"){}

	double Division::execute(double a, double b) const {
		return a / b;
	}

	Root::Root() :Operation("sqrt") {}

	double Root::execute(double a, double b) const
	{
		if (b == 0) {
			return 1;
		}
		if (a == 0) {
			return a;
		}
		if (b == 1) {
			return a;
		}
		else {
			return pow(a, 1 / b);
		}
	}

	Poww::Poww() :Operation("**") {}

	double Poww::execute(double a, double b) const
	{
		return pow(a, b);
	}

	Tetration::Tetration() : Operation("^_^"){}

	double Tetration::execute(double a, double b) const {
		double tmp = a;
		for (int i = 0; i < b; i++) {
			tmp = pow(tmp, a);
		}
		return tmp;
		
	}

	
}