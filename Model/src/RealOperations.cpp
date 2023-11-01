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

	XOR::XOR():Operation("^"){}

	double XOR::execute(double a, double b) const 
	{
		int fN = static_cast<int16_t>(a);
		int sN = static_cast<int16_t>(b);
		return fN ^ sN;
	}

	Pow::Pow():Operation("**"){}
	double Pow::execute(double a, double b) const
	{
		return pow(a, b);
	}

	Remainder::Remainder():Operation("%"){}

	double Remainder::execute(double a, double b) const
	{
		int fN = a;
		int sN = b;
		return fN % sN;
	}


}