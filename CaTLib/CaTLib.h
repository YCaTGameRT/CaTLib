#ifndef _CATLIB_H_
#define _CATLIB_H_

#include <stdio.h>
#include <locale.h>
#include <vector>
#include <string>
#include <map>

class CaTLib {
public:
	void Print();
	void AddElement(int num, std::string desc);
private:
	std::string title;
	std::map<int, std::string> element;
	std::vector<std::map<int, std::string>> allElements;
};

#endif