#include "Operation.hpp"

namespace Model {
	Operation::Operation(std::string name) :name(name) {}

	std::string Operation::getName() const {
		return name;
	}

	Summ::Summ() :Operation("+") {}

	double Summ::operator()(double a, double b) const {
		return a + b;
	}

	Substruct::Substruct() :Operation("-") {}

	double Substruct::operator()(double a, double b) const {
		return a - b;
	}
}