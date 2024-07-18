#include "ConsoleUI.h"
#include "Die.h"
#include "GameLogic.h"

#include <iostream>

using namespace std;

ConsoleUI::ConsoleUI()
{
	
}

void ConsoleUI::displayDie()
{
	//Displays dice
	GameLogic gamelogic;

	for (int i = 0; i < 5; i++)
	{
		//cout << "You rolled a: " << dice[i].getFaceValue() << endl;
	}
} 

void ConsoleUI::getKept(bool kept[5])
{
	//Gets which dice the user would like to keep from their roll

	int num = 0;

	cout << "Select which dice you would like to roll again. Enter a 1 to roll, 0 to keep: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Dice " << i + 1 << ": ";
		cin >> num;
		kept[i] = (num == 1);
		cout << endl;
	}

}

void ConsoleUI::displayFinalScore()
{
	//Displays the final score
	int totalScore = 0;

	GameLogic gamelogic;

	cout << "Your final score is: " << totalScore << endl;
}