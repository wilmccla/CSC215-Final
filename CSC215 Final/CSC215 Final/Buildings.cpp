#include <iostream>
#include <string>
#include "Buildings.h"
#include "Functions.h"
using namespace std;



Buildings::Buildings()
{
	Type("You have created a building.\n");
	Type("Please give you building a name\n");
}

void Buildings::SetName(string name) {
	Name = name;
}

string Buildings::GetName() {
	return Name;
}

Buildings::~Buildings()
{
}
