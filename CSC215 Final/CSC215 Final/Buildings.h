#pragma once
#include <iostream>
#include <string>
using namespace std;

class Buildings
{
public:
	Buildings();

	void SetName(string name);
	string GetName();

	~Buildings();


private:
	string Name;
};

