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
public:
	int gettotalScore();
	GameLogic();
	void rollAll();
	int getRounds();

};

#endif