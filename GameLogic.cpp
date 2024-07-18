#include "GameLogic.h"
#include "Die.h"
#include "ConsoleUI.h"

#include <iostream>
using namespace std;

GameLogic::GameLogic() : ROUNDS(3)
{
	//Constructor
	totalScore = 0;
}


void GameLogic::rollAll()
{
	//Rolls 5 dice
	for (int i = 0; i < 5; i++)
	{
		dice[i].roll();
	}
}

void GameLogic::rollSpec(bool kept[5])
{
	//Rolls dice the user keeps
	for (int i = 0; i < 5; i++)
	{
		if (kept[i] == 1)
		{
			dice[i].roll();
		}
	}
}

int GameLogic::gettotalScore()
{
	//Gets the total score
	for (int i = 0; i < 5; i++)
	{
		totalScore += dice[i].getFaceValue();
	}

	return totalScore;
}

void GameLogic::displayDie()
{

	for (int i = 0; i < 5; i++)
	{
		cout << "You rolled a: " << dice[i].getFaceValue() << endl;
	}
}

void GameLogic::game()
{
	//Rolls and displays dice. Asks user input for which dice they would like to keep.
	ConsoleUI consoleui;
	Die die;

	for (int i = 0; i < ROUNDS; i++)
	{
		rollAll();
		displayDie();
		if (i < ROUNDS - 1)
		{
			bool kept[5];
			consoleui.getKept(kept);
			rollSpec(kept);
		}
	}
}