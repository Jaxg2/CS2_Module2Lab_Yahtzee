#include "GameLogic.h"
#include "Die.h"
#include "ConsoleUI.h"

#include <iostream>
using namespace std;

GameLogic::GameLogic() : ROUNDS (3), Dice (5)
{
	totalScore = 0;
}


void GameLogic::rollAll()
{
	
}

int GameLogic::getScore()
{
	return totalScore;
}