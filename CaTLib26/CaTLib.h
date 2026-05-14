#ifndef _CATLIB_H_
#define _CATLIB_H_

#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <string>
#include <map>

class CaTLib {
public:
	CaTLib();
	CaTLib(std::string title);

	void Print();
	void AddElement(int num, std::string desc);
	int FromUser();
	void RemoveElement(int num);
	void RemElementSec(int num, std::string desc);
	void FullClear();
	std::string Search(int num);
	void SearchToTerm(int num);

	std::string GetTitle();
	void SetTitle(std::string title);
	std::map<int, std::string> GetElements();
private:
	void SearchErr(int num);
	void SearchErr(int num, std::string desc);

	std::string title;
	std::map<int, std::string> elements;
};

#endif