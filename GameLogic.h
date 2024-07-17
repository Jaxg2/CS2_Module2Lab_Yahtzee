#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "Die.h"
#include <iostream>
using namespace std;


class GameLogic
{
private:
	int totalScore;
	int rounds;
	//Die dice[5];

public:
	GameLogic();
	int gettotalScore();
	void settotalScore();
	void rollAll();
	int getRounds();

};

#endif