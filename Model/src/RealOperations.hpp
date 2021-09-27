#ifndef REAL_OPERATONS_HPP
#define REAL_OPERATONS_HPP

#include "Operation.hpp"
#ifdef MODEL_EXPORTS
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif // MODEL_EXPORTS

namespace Model {

	class DECLSPEC Addition :public Operation {
	public:
		Addition();
		double execute(double a, double b) const override;
	};

	class DECLSPEC Subtraction :public Operation {
	public:
		Subtraction();
		double execute(double a, double b) const override;
	};

	class DECLSPEC Multiply:public Operation {
	public:
		Multiply();
		double execute(double a, double b) const override;
	};
	class DECLSPEC Division :public Operation {
	public:
		Division();
		double execute(double a, double b) const override;
	};

}

#endif // !REAL_OPERATONS_HPP
