#include "..\..\Model\src\Calc.hpp"

#include "Calc.hpp"
#include <cstdlib>





View::Calc::Calc(void):model(Model::Calc::GetСalculator())
{
	operations = model.getOperations();
}
View::Calc::~Calc(void) {}
	
std::string View::Calc::operation(std::string A, std::string B, std::string operation) const
{
	double a{ ::atof(A.c_str()) }, b{ ::atof(B.c_str()) };
	double result{ 0 };
	try {
		result = model.operation(a, b, operation);
	}
	catch (std::exception &ex) {
		return ex.what();
	}
	return std::to_string(result);
}

std::list<std::string> View::Calc::getOperations() const {
	return this->operations;
}

std::list<std::string> View::Calc::getHistory() const {
	return model.getHistori();
}
