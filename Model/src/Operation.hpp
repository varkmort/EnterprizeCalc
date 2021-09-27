#ifndef OPERATION_HPP
#define OPERATION_HPP
#include <string>

#ifdef MODEL_EXPORTS
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif // MODEL_EXPORTS

namespace Model {
	class DECLSPEC Operation {
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