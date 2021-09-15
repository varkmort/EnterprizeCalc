#include "Operation.hpp"

Operation::Operation(std::string name):name(name) {}

std::string Operation::getName() {
	return name;
}

Summ::Summ():Operation("+") {}

double Summ::operator()(double a, double b) const {
	return a+b;
}
