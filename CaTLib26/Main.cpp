#include "CaTLib.h"

int main() {
	setlocale(LC_ALL, "Russian");
	CaTLib menu("Выберитие операцию:");
	menu.AddElement(1, "Сложение");
	menu.AddElement(2, "Вычитание");
	menu.Print();
	menu.RemoveElement(1);
	menu.Print();
	menu.FullClear();
	menu.Print();
	menu.AddElement(1, "Сложение");
	menu.RemElementSec(2, "ыпаыа");
	menu.RemElementSec(1, "Сложение");
	menu.Print();
	menu.AddElement(1, "Сложение");
	menu.SearchToTerm(1);
	return 0;
}