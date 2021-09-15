#ifndef OPERATION_HPP
#define OPERATION_HPP
#include <string>


namespace Model {
	class Operation {
	public:
		Operation(std::string name);
		std::string getName();
		virtual double operator()(double a, double b) const = 0;
	private:
		std::string name;
	};


	class Summ :public Operation {
	public:
		Summ();
		double operator()(double a, double b) const override;
	};

	class Substruct :public Operation {
	public:
		Substruct();
		double operator()(double a, double b) const override;
	};
}
#endif