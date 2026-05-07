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

	std::string GetTitle();
	void SetTitle(std::string title);
	std::map<int, std::string> GetElements();
private:
	std::string title;
	std::map<int, std::string> elements;
};

#endif