#include "CaTLib.h"

CaTLib::CaTLib() {
	title = "";
}
CaTLib::CaTLib(std::string title) {
	this->title = title;
}

void CaTLib::Print() {
	printf("%s\n", title.c_str());
	for (auto& i : elements) {
		std::cout << i.first << ". " << i.second << "\n";
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

std::string CaTLib::GetTitle() {
	return title;
}
void CaTLib::SetTitle(std::string title) {
	this->title = title;
}