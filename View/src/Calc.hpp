#pragma once

#define WIN32_LEAN_AND_MEAN // Исключите редко используемые компоненты из заголовков Windows
//$(SolutionDir)bin\$(Platform)\$(Configuration)\
//$(SolutionDir)bin\$(Platform)\$(Configuration)\intermediate\$(ProjectName)\

#include <string>
#include <list>
#include <map>



#ifdef VIEW_DLLEXPORT
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif 

namespace Model {
	class Сalculator;
}

namespace View {
	class DECLSPEC Calc {
	public:
		Calc(void);
		~Calc(void);
		std::list<std::string> getOperations()const;
		std::string operation(
			std::string A, 
			std::string B, 
			std::string operation)const;
		std::list<std::string> getHistory()const;
	private:
		std::list<std::string> operations;
		Model::Сalculator &model;
	};
}