#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CaTLib/CaTLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CaTLibTests {		
	TEST_CLASS(UnitTest1) {
	public:
		TEST_METHOD(ConstructorTest) {
			// TODO: –азместите здесь код своего теста
			CaTLib lib("тестирование");
		}
		TEST_METHOD(TestMethod2) {
			// TODO: –азместите здесь код своего теста
		}
	};
}