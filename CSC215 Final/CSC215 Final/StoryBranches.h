#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include "Functions.h"
#include "Buildings.h"
#include "Tower.h"
using namespace std;

// Header file that contains all the different story branching functions

void GrowShip();
void MakeBuildings();
void CryoShip(); // Bunch O Text
void ExploreShip(); // Bunch O Text
void Datapad();
void Welcome(); // Welcoming the player
void TriviaProtocol();
void ShowLocation(string* hex);
void Type(const std::string& text); // Type Text function, renamed to Type for easier/faster coding
