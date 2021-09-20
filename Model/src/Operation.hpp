#ifndef OPERATION_HPP
#define OPERATION_HPP
#include <string>


namespace Model {
	class Operation {
	public:
		Operation(std::string name);
		std::string getName()const;
		double operator()(double a, double b) const;
	protected:
		void putLog(std::string name, double a, double b, double res)const;
		virtual double execute(double a, double b) const =0;
	private:
		std::string name;
	};


}
#endif