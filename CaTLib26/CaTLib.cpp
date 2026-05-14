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
void CaTLib::RemoveElement(int num) {
	elements.erase(num);
}
void CaTLib::RemElementSec(int num, std::string desc) {
	std::map<int, std::string> tmp;
	tmp[num] = desc;
	if (elements == tmp) {
		elements.erase(num);
	}
}

std::string CaTLib::GetTitle() {
	return title;
}
void CaTLib::SetTitle(std::string title) {
	this->title = title;
}
std::map<int, std::string> CaTLib::GetElements() {
	return elements;
}