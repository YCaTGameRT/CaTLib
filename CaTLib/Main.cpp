#include "CaTLib.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int choose;
	CaTLib menu("Выберитие операцию:");
	menu.AddElement(1, "mutiplication");
	menu.AddElement(2, "subtruction");
	menu.Print();
	choose = menu.FromUser();
	system("pause");
	return 0;
}