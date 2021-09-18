#ifndef REAL_OPERATONS_HPP
#define REAL_OPERATONS_HPP

#include "Operation.hpp"

namespace Model {

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

#endif // !REAL_OPERATONS_HPP
