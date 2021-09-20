#include "CppUnitTest.h"


#include "..\Model\src\RealOperations.hpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorUnitTest
{
	TEST_CLASS(Summ)
	{
	public:
		
		TEST_METHOD(creatinng)
		{
			Model::Addition q;
			Assert::AreEqual("&", q.getName().c_str(), "wrong param");
		}
	};

	TEST_CLASS(Calc) {
	public:

	TEST_METHOD(testOperation) {}
	};
}
namespace CalculatorModelUnitTest {
	TEST_CLASS(model) {
public:

	TEST_METHOD(testpointer) {}
	};

	TEST_CLASS(Calc) {
public:

	TEST_METHOD(testOperation) {}
	};
}