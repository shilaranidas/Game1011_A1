// Game1011_A1_Das.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>
#include "Survey.h"
using namespace std;

int main()
{


	cout << "welcome in assignment 1(survey).\n";
	cout << "How many participants will participate in this survey (max 500).\n";
	int no_participiant;
	bool v = false;
	do
	{
		std::cin >> no_participiant;
		if (no_participiant > 500)
		{
			std::cout << "invalid number of participant.\n";
		}
		else
			v = true;
	} while (v != true);
	//Randomly generate those participants. Add them to the Survey class.
	srand(time(NULL));
	Survey survey = Survey(no_participiant);
	survey.GenerateData();
	char ready;
	cout << "Are you ready to process the survey? Y/N\n";
	cin >> ready;
	if(ready == 'Y' || ready == 'y')
	{
		survey.processSurvey();
		std::cout << "---------------------------------------------------------------"<<endl;
		std::cout << "# of Non Gaming Students: " << survey.getNoOfNonGamingStudent() << endl;
		std::cout << "\tAverage age: " << survey.getAvgAgeNonGaming()<< "\n";
		std::cout << "\tMost preferred streaming service (aka. mode): " << survey.getMostPreferedService() << "\n";
		std::cout << "\tAverage hours per day spent consuming non-gaming entertainment: " << survey.getAvgHrNonGaming() << "\n";
		std::cout << "---------------------------------------------------------------" << endl;
		std::cout << "# of Gaming Students: " << survey.getNoOfGamingStudent() << endl;
		std::cout << "\tAverage age: " << survey.getAvgAgeGaming() << "\n";
		std::cout << "\tMost preferred gaming device: " << survey.getMostPreferedDevice() << "\n";
		std::cout << "\tAverage hours per day spent consuming gaming entertainment: " << survey.getAvgHrGaming() << "\n";
	}
	
		
		
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
