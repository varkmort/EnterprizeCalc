#include "RealOperations.hpp"


namespace Model {

	Summ::Summ() :Operation("+") {}

	double Summ::operator()(double a, double b) const {
		return a + b;
	}

	Substruct::Substruct() :Operation("-") {}

	double Substruct::operator()(double a, double b) const {
		return a - b;
	}
}