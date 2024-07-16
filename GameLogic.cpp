#include "GameLogic.h"
#include "Die.h"

#include <iostream>
using namespace std;

GameLogic::GameLogic()
{
	totalScore = 0;
	rounds = 0;
}


void GameLogic::rollAll()
{
	Die die;

	for (int i = 0; i < 5; i++)
	{
		die.roll();
	}

	
}

int GameLogic::gettotalScore()
{
	return totalScore;
}

int GameLogic::getRounds()
{
	return rounds;
}