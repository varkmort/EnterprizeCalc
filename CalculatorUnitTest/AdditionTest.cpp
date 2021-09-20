#include "pch.hpp"
#include "CppUnitTest.h"

#include "..\Model\src\RealOperations.hpp"
#include "..\Model\src\Operation.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ModelTest {
	namespace Operations {
		TEST_CLASS(Addition) {
		public:

			TEST_METHOD(Creation) {
				Assert::IsTrue(std::is_constructible<Model::Addition>());
			}

			TEST_METHOD(InheritFromOperation) {
				Assert::IsTrue(std::is_base_of<Model::Operation, Model::Addition>(), L"ƒеление не наследник операции");
			}

			TEST_METHOD(CorrectName) {
				Model::Addition w;
				Assert::AreEqual("+", w.getName().c_str(), L"неправильное им€");
			}
			TEST_METHOD(ReturnCorrectAnswer) {
				Model::Addition w;
				Assert::AreEqual(
					std::to_string(0.0),
					std::to_string(w(0.0, 0.0)),
					L"Ќеверный ответ не 0"
				);
				Assert::AreEqual(
					std::to_string(10.0),
					std::to_string(w(5.0, 5.0)),
					L"Ќеверный ответ не не складывает числа"
				);
				Assert::AreEqual(
					std::to_string(0.0),
					std::to_string(w(5.0, -5.0)),
					L"Ќеверный ответ не не складывает числа"
				);
				Assert::AreEqual(
					std::to_string(0.0),
					std::to_string(w(-5.0, 5.0)),
					L"Ќеверный ответ не не складывает числа"
				);
				Assert::AreEqual(
					std::to_string(-10.0),
					std::to_string(w(-5.0, -5.0)),
					L"Ќеверный ответ не не складывает числа"
				);
			}
		};
	}
}