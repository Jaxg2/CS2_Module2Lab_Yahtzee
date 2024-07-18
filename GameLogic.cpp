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

void GameLogic::rollSpec()
{

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

}