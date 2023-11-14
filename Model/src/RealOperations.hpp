#ifndef REAL_OPERATONS_HPP
#define REAL_OPERATONS_HPP

#include "Operation.hpp"

namespace Model {

	class Addition :public Operation {
	public:
		Addition();
		double execute(double a, double b) const override;
	};

	class Subtraction :public Operation {
	public:
		Subtraction();
		double execute(double a, double b) const override;
	};

	class Multiply:public Operation {
	public:
		Multiply();
		double execute(double a, double b) const override;
	};
	class Division :public Operation {
	public:
		Division();
		double execute(double a, double b) const override;
	};
	class XOR :public Operation
	{
	public:
		XOR();
		double execute(double a, double b) const override;
	};

	class Root : public Operation {
	public:
		Root();
		double execute(double a, double b)const override;
	};

	class Poww :public Operation {
	public:
		Poww();
		double execute(double a, double b) const override;
	};

	class Tetration :public Operation {
	public:
		Tetration();
		double execute(double a, double b) const override;
	};

	class Ostatok : public Operation {
	public:
		Ostatok();
		double execute(double a, double b) const override;
	};

	class Stepen : public Operation {
	public:
		Stepen();
		double execute(double a, double b) const override;
	};


	class Tetration :public Operation
	{
	public:
		Tetration();
		double execute(double a, double b) const override;
	};

	class Square :public Operation
	{
	public:
		Square();
		double execute(double a, double b) const override;
	};
}

#endif // !REAL_OPERATONS_HPP
