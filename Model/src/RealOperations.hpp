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

}

#endif // !REAL_OPERATONS_HPP
