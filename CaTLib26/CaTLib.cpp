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
	else {
		this->SearchErr(num, desc);
	}
}
void CaTLib::FullClear() {
	elements.clear();
}
std::string CaTLib::Search(int num) {
	if (!elements[num].empty()) {
		return elements[num];
	}
	else {
		this->SearchErr(num);
	}
}
void CaTLib::SearchToTerm(int num) {
	if (!elements[num].empty()) {
		printf("Под номером %d найден элемент \"%s\"\n", num, this->Search(num).c_str());
	}
	else {
		this->SearchErr(num);
	}
	
}
void CaTLib::SearchErr(int num) {
	printf("Неверно указан элемент %d или его не существует\n", num);
}
void CaTLib::SearchErr(int num, std::string desc) {
	printf("Неверно указан элемент %d со значением \"%s\" или его не существует\n", num, desc.c_str());
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