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
	return 0;
}