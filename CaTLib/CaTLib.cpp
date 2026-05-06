#include "CaTLib.h"

CaTLib::CaTLib(std::string title) {
	this->title = title;
}

void CaTLib::Print() {
	printf("%s\n", title.c_str());
	for (auto i : elements) {
		printf("%s\n", i);
	}
}
void CaTLib::AddElement(int num, std::string desc) {
	elements[num] = desc;
}
int CaTLib::FromUser() {
	int choose;
	printf("Введите номер действия\n>>: ");
	return scanf_s("%d", &choose);
}