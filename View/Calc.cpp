#include "Calc.hpp"

namespace View {
	Calc::Calc():model(Model::Calc::GetInstance())
	{
		operations = model->getOperations();
	}

	std::string Calc::operation(std::string A, std::string B, const std::string operation) const
	{
		//проверка А
		//проверка В
		//проверка что ключ соответсвует списку
		double a, b;

		//operations[operation]->operator()(a,b);
		return std::string();
	}
}
