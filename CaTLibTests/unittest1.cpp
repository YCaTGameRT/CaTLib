#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CaTLib/CaTLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CaTLibTests {		
	TEST_CLASS(UnitTest1) {
	public:
		TEST_METHOD(VoidConstructorTest) {
			CaTLib lib;
			Assert::IsTrue(lib.GetTitle == "");
		}
		TEST_METHOD(ConstructorTest) {
			CaTLib lib("тест");
			Assert::IsTrue(lib.GetTitle() != "");
		}


	};
}