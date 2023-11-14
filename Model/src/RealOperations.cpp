#include "RealOperations.hpp"


namespace Model {

	Addition::Addition() :Operation("+") {}

	double Addition::execute(double a, double b) const {
		//åñëè î÷åíü õî÷åòñÿ îãðåáàòü íà ðàáîòå
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

	Ostatok::Ostatok() :Operation("%") {}

	double Ostatok::execute(double a, double b) const {
		return static_cast<int>(a) % static_cast<int>(b);
	}


	Tetration::Tetration() :Operation("^^") {}

	double Tetration::execute(double a, double b) const {

		double res = a;
		for (size_t i = 0; i < b; i++)
		{
			res = std::pow(res, a);

		}
		return res;
	}

	Square::Square() :Operation("$") {}

	double Square::execute(double a, double b) const
	{
		if (b == 2)
		{
			return std::sqrt(a);
		}
		else if (b == 3) {
			return std::cbrt(a);
		}
	}
}