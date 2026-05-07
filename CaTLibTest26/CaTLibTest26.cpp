#include "pch.h"
#include "CppUnitTest.h"
#include "../CaTLib26/CaTLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CaTLibTest26 {
	TEST_CLASS(CaTLibTest26) {
	public:
		TEST_METHOD(VoidConstructorTest) {
			CaTLib lib;
			Assert::IsTrue(lib.GetTitle() == "");
		}
		TEST_METHOD(ConstructorTest) {
			CaTLib lib("тест");
			Assert::IsTrue(lib.GetTitle() != "");
		}
	};
}
