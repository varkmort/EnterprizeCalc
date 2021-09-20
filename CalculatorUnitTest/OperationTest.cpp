#include "pch.hpp"
#include "CppUnitTest.h"


#include "..\Model\src\Operation.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ModelTest {
	namespace Operations {

		TEST_CLASS(Operation) {
		public:
			TEST_METHOD(Creation) {
				Assert::IsFalse(std::is_constructible<Model::Operation>(), L"операция должна быть абстрактным классом");
			}
		};
	}
}