#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "Die.h"
#include <iostream>
#include <vector>
using namespace std;


class GameLogic
{
private:
	int totalScore;
	const int ROUNDS;
	vector <Die> Dice;
public:
	GameLogic();
	int getScore();
	void rollAll();
};

#endif