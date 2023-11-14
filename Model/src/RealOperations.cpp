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

	Ostatok::Ostatok() :Operation("%") {}

	double Ostatok::execute(double a, double b) const {
		return static_cast<int>(a) % static_cast<int>(b);
	}

	Stepen::Stepen() :Operation("^") {}

	double Stepen::execute(double a, double b) const {

		return std::pow(a, b);
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