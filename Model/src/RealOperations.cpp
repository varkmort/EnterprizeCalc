#include "RealOperations.hpp"


namespace Model {

	Summ::Summ() :Operation("+") {}

	double Summ::execute(double a, double b) const {
		return a + b;
	}

	Substruct::Substruct() :Operation("-") {}

	double Substruct::execute(double a, double b) const {
		return a - b;
	}
}