#include "GameLogic.h"
#include "Die.h"
#include "ConsoleUI.h"

#include <iostream>
using namespace std;

GameLogic::GameLogic() : ROUNDS(3)
{
	totalScore = 0;
}


void GameLogic::rollAll()
{
	for (int i = 0; i < 5; i++)
	{
		dice[i].roll();
	}
}

void GameLogic::rollSpec(bool kept[5])
{
	for (int i = 0; i < 5; i++)
	{
		if (kept[i] == 1)
		{
			dice[i].roll();
		}
	}
}

int GameLogic::getScore()
{

	for (int i = 0; i < 5; i++)
	{
		totalScore += dice[i].getFaceValue();
	}

	return totalScore;
}

void GameLogic::play()
{
	ConsoleUI consoleui;

	for (int i = 0; i < ROUNDS; i++)
	{
		rollAll();
		consoleui.displayDie(dice);
	}
}