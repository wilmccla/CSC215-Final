#include <iostream>
#include <string>
#include <Windows.h>
#include <thread>
#include "Functions.h"
#include "StoryBranches.h"
using namespace std;

// Declaring Global Variables
int Karma = 0;
int Choice1 = 0;
int Choice2 = 0;
int Tracker;
string UserName;
string UserInput;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int CompleteBuildings = 0;
int UserChoice;


int main() { // Main function, nice and tidy
	Beginnings();
	Type("THE END");
}

void GrowShip()
{
	SetConsoleTextAttribute(hConsole, 10);
	Type("\nA few months have passed, and the grow rooms have been successful.\n");
	Type("You made it to the planet in one piece, and all of your passengers that you left Earth with have made it here alive.\n");
	Type("To start your new life on this planet you have to decide on which buildings to create.\n");
	Type("Farms will sustain your people with food. Wells will give your people water. Towers will give your people defences. And entertainment buildings give your people something to do in their spare time.\n");
	Type("Having made enough preparations, your new home is now on its journey to being prosperous!");
	return;
}

void MakeBuildings() {
	while (CompleteBuildings < 4)
	{
		Type("Which building would you like to create?");
		cout << "1- Farm" << "2- Well" << "3- Tower" << "4- Entertainment";
		cin >> UserChoice;
		switch (UserChoice) { // Including the commented out parts gave me an error that I couldn't figure out how to fix. Classes are there but because of that error I couldn't implement them.
		case 1:
			cout << "You created a farm" << endl;
			//Buildings Farm;
			CompleteBuildings++;
			break;

		case 2:
			cout << "You created a Well" << endl;
			//Buildings Well;
			CompleteBuildings++;
			break;

		case 3:
			cout << "You created a Tower" << endl;
			//Tower Guard;
			CompleteBuildings++;
			break;

		case 4:
			cout << "You created an Entertainment Complex" << endl;
			//Buildings Entertainment;
			CompleteBuildings++;
			break;
		}
		return;
	}
}

void CryoShip() { // Bunch O Text

	SetConsoleTextAttribute(hConsole, 10);
	Type("\nA few days pass as the ship's computer works on deciding which passengers to wake and which to leave in cryosleep.\n");
	Type("On the third day you walk the ship and realize it's a little too empty. In fact, since being woken up you haven't seen a single other passenger.\n");
	Type("You walk to the massive cryochambers and walk up to the first one you spot.\n");
	Type("You put in your captain's credentials to wake up this passenger, but they come up invalid.\n");
	Type("At that point, all the lights go out. You heard an unfamiliar voice. 'Captain...'\n");
	Type("Three humanoids dressed in shadowy grey outfits and cloaks jump down from the higher levels and land all around you.\n");
	Type("You back away towards the wall, freightened. You reach for your laser pistol and find that it's not there.\n");
	Type("'What is the meaning of this? Who are you?!' You yell out at the figures.\n");
	Type("'Relax captain. We're not here to harm you.' Your body starts to let go of it's built up tension, however you feel you're not totally in the clear just yet.\n");
	Type("'We're here for a mutually beneficial arrangement. Our home world is in danger and your people are looking for a home.\n");
	Type("The one talking takes off their hood, and you see a purple alien looking figure.\n");
	Type("'What... what are you? We haven't met any other lifeforms until now. This is incredible.'");
	Type("You sit down and talk with the alien. They tell you of their homeworld and the curse that is affecting their people.\n");
	Type("After a few weeks of travel, you arrive at their planet.\n");
	Type("You awake all of your people and you all make it onto the planet. Throughout the many years, you and your people cure and establish your home on this newfound planet, living alongside an alien race.");
	return;
}

void ExploreShip() { // Bunch O Text

	SetConsoleTextAttribute(hConsole, 10);
	Type("\nScans pick up a large asteroid field very close to your ships location.\n");
	Type("You head straight for it, hoping you find something useful for the journey.\n");
	Type("As your ship arrives at the edge of the asteroid space, you pick a group of skilled passengers and send board an escape ship, fully equipped for flight.\n");
	Type("As you explore the asteroid field a sense of unease comes over you and your crew.\n");
	Type("It's not very far in when you spot a weird blue shimmer surrounding a lot of the asteroids.\n");
	Type("You get closer, and that's when you spot structures are built into these asteroids with some kind of shield surrounding them.\n");
	Type("You explore the structures, freely able to move through the shield.\n");
	Type("You enter a room with a desk that has a dusty datapad lying on top. You pick it up and boot it.\n");
	Datapad(); // Calling DataPad();
	return;
}

void Datapad() {
	string Treasure = "Boat Loads Of Money!";
	string* Location = &Treasure;
	Welcome(); // Calling Welcome
	ShowLocation(Location); // Calling ShowLocation with the pointer Location as the parameter
	system("pause");
}

void Welcome() // Welcoming the player
{
	Type("Booting DataPad"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n"; Sleep(800);
	Type("Congratulations explorer, you have found the DataPad of the famous explorer John Smith.\n");
	Type("As a safety protocol, John installed a small trivia test to inhibit unintellectual individuals from getting his lost lost treasure.\n");
	Type("But don't worry, I'm sure you're very intellectual!\n");
	Type("Booting Trivia Protocol"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n\n"; Sleep(800);
	TriviaProtocol(); // Calling TriviaProtocol
	system("pause");
	return;
}

void TriviaProtocol()
{
	//Variables
	int UserChoice;
	// Bunch of typing to the console, the cin's are just for show there are no right or wrong answers
	Type("Welcome to the Trivia Protocol! "); Type("I'm your host,"); SetConsoleTextAttribute(hConsole, 14); Type(" Jerry!\n"); SetConsoleTextAttribute(hConsole, 15);
	Type("Please give a huge round of applause for our guest,"); SetConsoleTextAttribute(hConsole, 12); Type(" DataPad ERROR :name not found!\n"); SetConsoleTextAttribute(hConsole, 15);
	Type("Okay."); SetConsoleTextAttribute(hConsole, 12); Type(" ERROR"); SetConsoleTextAttribute(hConsole, 15); Type(", are you ready for your first question?"); Type(" Well, here it is!!!\n");
	Type("What year was the Earth completely obliterated?\n");
	cout << "1- 3054\n"; cout << "2- 3066\n"; cout << "3- REDACTED\n";
	cin >> UserChoice;
	Type("Wowza!!! "); SetConsoleTextAttribute(hConsole, 12); Type("ERROR"); SetConsoleTextAttribute(hConsole, 15); Type(", really knows their stuff!!!\n");
	Type("Now, for your next question...\n");
	Type("Who did President Sarah kill that resulted in the Last World War?\n");
	cout << "1- Sir Rodrick of Castle Nook\n" << "2- Supreme Leader Trump\n" << "3- Chancellor Goodwig\n";
	cin >> UserChoice;
	Type("A M A Z I N G! "); Type("You are on a roll!!"); Type(" You are unstoppable!!!"); Type(" You are a star!!!!\n");
	Type("This is your final question!\n");
	Type("How many moons orbit around Eibos?\n");
	cout << "1- 2\n" << "2- 3\n" << "3- Eibos has moons???\n";
	cin >> UserChoice;
	Type("U N B E L I E V E A B L E!"); Type(" I N C R E D I B L E!"); Type(" S P E C T A C U L A R!"); SetConsoleTextAttribute(hConsole, 12); Type(" ERROR"); SetConsoleTextAttribute(hConsole, 15); Type(", has gotten ALL THREE QUESTIONS CORRECT!\n");
	Type("This has been a WONDERFUL show everybody. I'm your host,"); SetConsoleTextAttribute(hConsole, 14); Type(" Jerry!"); SetConsoleTextAttribute(hConsole, 15); Type(" and this is me signing off!\n");
	Type("Ending Trivia Protocol"); cout << "."; Sleep(800); cout << "."; Sleep(800); cout << ".\n\n"; Sleep(800);
	return;
}

void ShowLocation(string* hex)
{
	//More typing to the console
	Type("Congratulations explorer. "); Type("You managed to pass the Trivia that blocked you from accessing the location of John's treasure.\n");
	Type("We will uphold our word and reveal the location of the treasure for you.\n");
	Type("John's famous treasure is located in sector "); cout << hex << endl;
	Type("Beware of the Booby Traps!\n");
	Type("You decide to follow the coordinates. At the end you find a completely habitable planet not picked up by the scanners, as well as a boatload of gold as you find John Smith's treasure.");
	return;
}

void Type(const std::string& text) // Type Text function, renamed to Type for easier/faster coding
{
	// loop through each character in the text
	for (std::size_t i = 0; i < text.size(); ++i)
	{
		// output one character
		// flush to make sure the output is not delayed
		std::cout << text[i] << std::flush;

		// sleep 60 milliseconds
		std::this_thread::sleep_for(std::chrono::milliseconds(30));
	}
	Sleep(800);
}

void Beginnings()
{
	Type("Hello, Captain.\n");
	Type("How was your sleep?\n\n");

	GetNumbersFromUser(Tracker = 0); // Calling GetNumbersFromUser with parameter of tracker = 0

	Type("\nMy logs on you have become corrupted. Let us take this time to update them.");
	Type("\nPlease Enter your name:  ");

	GetNameFromUser(); // Calling GetNameFromUser

	Type("Welcome, Captain " + UserName + " to the S.S. Odyssey\n");
	Type("You were sent from Earth 678 years ago to find another habitable planet.\n");
	Type("The journey hasn't had much results, until recently.\n");
	Type("Scans have picked up a planet that fits the category.\n");
	Type("However, the ship's fusion core suffered damage from a critical failure, and won't be able to last until arrival.\n");
	Type("In an effort to reduce power consumption, I've begun the process of waking up the passengers so we can unpower their pods.\n");
	Type("However, the ship was not prepared for such a journey with conscious passengers, and the food reserves won't last.\n");
	Type("As the captain, you have the authority and responsibility to decide for the passengers.\n");
	Type("What do you want to do?\n\n");

	GetNumbersFromUser(Tracker = 1); // Calling GetNumbersFromUser with parameter of tracker = 1

	system("pause");
	return;
}

void GetNameFromUser()
{
	cin >> UserName; // Player enters UserName
}

void GetNumbersFromUser(int Tracker)
{
	if (Tracker == 0)
	{
		SetConsoleTextAttribute(hConsole, 14);
		cout << "1 - 'What?'\n";
		cout << "2 - 'Good Morning?'\n";
		cout << "3 - 'Where Am I?'\n\n";
		SetConsoleTextAttribute(hConsole, 15);

		cin >> Choice1;
		switch (Choice1) // Switch case to make the player
		{
		case 1:
			Type("\nIt seems you have yet to recover your memories. This is a common side effect to cryosleep.");
			break;

		case 2:
			Type("\nCryosleep is not always the most comfortable of procedures. I am sorry if it was unsettling.");
			break;

		case 3:
			Type("\nYou are on a ship. I have just woken you from cryosleep.");
		}
		Tracker++;
		return;
	}
	if (Tracker == 1) {

		SetConsoleTextAttribute(hConsole, 14);
		cout << "1 - Convert different rooms in the ship for food growing. It will give us less resources when we arrive to the planet but will it matter if we can't get there alive?\n";
		cout << "2 - Leave half the passengers in cryosleep without powered support. Have our medical team keep tabs on them in case of issues. It will be a tedious, but necessary process.\n";
		cout << "3 - The food problem is a side effect of the power problem. We should scavenge any asteroid fields in hopes we find some kind of fuel for power.\n\n";
		SetConsoleTextAttribute(hConsole, 15);
		cin >> Choice2;
		switch (Choice2)
		{
		case 1:
			Type("Very well, I will inform the passengers right away.\n");
			GrowShip();
			break;

		case 2:
			Type("A calculated risk. I will leave half the passengers in cryosleep, prioritizing the least productive.\n");
			CryoShip();
			break;

		case 3:
			Type("Very wise. I will begin local scans now.\n");
			ExploreShip();
			break;
		}
		return;
	}
}