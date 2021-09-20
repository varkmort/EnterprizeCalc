#include "pch.hpp"
#include "CppUnitTest.h"

#include "..\Model\src\RealOperations.hpp"
#include "..\Model\src\Operation.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ModelTest
{
	namespace Operations {

		TEST_CLASS(Division)
		{
		public:

			TEST_METHOD(Creation)
			{
				Assert::IsTrue(std::is_constructible<Model::Division>());
			}
			TEST_METHOD(InheritFromOperation)
			{
				Assert::IsTrue(std::is_base_of<Model::Operation, Model::Division>(), L"������� �� ��������� ��������");
			}
			TEST_METHOD(CorrectName)
			{
				Model::Division w;
				Assert::AreEqual("/", w.getName().c_str(), L"������������ ���");
			}
			TEST_METHOD(ReturnCorrectAnswer)
			{
				Model::Division w;
				Assert::AreEqual(
					std::to_string(0.0),
					std::to_string(w(0.0, 1.0)),
					L"�������� ����� �� 0"
				);
				Assert::AreEqual(
					std::to_string(1.0),
					std::to_string(w(5.0, 5.0)),
					L"�������� ����� �� ����� �����"
				);
				Assert::AreEqual(
					std::to_string(-1.0),
					std::to_string(w(5.0, -5.0)),
					L"�������� ����� ��  ����� �����"
				);
				Assert::AreEqual(
					std::to_string(-1.0),
					std::to_string(w(-5.0, 5.0)),
					L"�������� ����� �� �� ����� �����"
				);
				Assert::AreEqual(
					std::to_string(1.0),
					std::to_string(w(-5.0, -5.0)),
					L"�������� ����� �� ����� �����"
				);
			}
			TEST_METHOD(ReturnCorrectException) {
				Model::Division w;
				Assert::ExpectException<std::invalid_argument>([&](){w(0.0, 0.0);});
			}
		};
	}
}
