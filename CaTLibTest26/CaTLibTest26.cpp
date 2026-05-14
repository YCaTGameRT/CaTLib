#include "pch.h"
#include "CppUnitTest.h"
#include "../CaTLib26/CaTLib.h"
#include "../CaTLib26/CaTLib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CaTLibTest26 {
	TEST_CLASS(CaTLibTest26) {
	public:
		TEST_METHOD(TitleTest) {
			CaTLib lib("тест");
			Assert::IsTrue(lib.GetTitle() == "тест");
		}
		//TEST_METHOD(PrintTest) {
		//	CaTLib lib("тест");
		//	std::system("../x64/Debug/CaTLib26.exe > print.txt");
		//	//Assert::IsTrue();
		//}
		TEST_METHOD(AddTest) {
			CaTLib lib("тест");
			lib.AddElement(1, "ку");
			Assert::IsTrue(!lib.GetElements().empty());
		}
		TEST_METHOD(AddedValueIsTrue) {
			CaTLib lib("тест");
			lib.AddElement(1, "ку");
			Assert::IsTrue(lib.GetElements()[1] == "ку");
		}
		TEST_METHOD(RemoveTest) {
			CaTLib lib("тест");
			lib.AddElement(1, "ку");
			lib.RemoveElement(1);
			Assert::IsTrue(lib.GetElements().empty());
		}
		TEST_METHOD(SecureRemoveTest) {
			CaTLib lib("тест");
			lib.AddElement(1, "ку");
			lib.RemElementSec(1, "ку");
			Assert::IsTrue(lib.GetElements().empty());
		}
	};
}
