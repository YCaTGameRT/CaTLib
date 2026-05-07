#include "pch.h"
#include "CppUnitTest.h"
#include "../CaTLib26/CaTLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CaTLibTest26 {
	TEST_CLASS(CaTLibTest26) {
	public:
		TEST_METHOD(GetTest) {
			CaTLib lib("тест");
			lib.AddElement(1, "1");
			//Assert::IsTrue(lib.);
		}
	};
}
