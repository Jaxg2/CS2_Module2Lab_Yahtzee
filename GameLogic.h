#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "Die.h"
#include "ConsoleUI.h"
#include <iostream>
#include <vector>
using namespace std;


class GameLogic
{
private:
	int totalScore;
	const int ROUNDS;
	Die dice[5];
public:
	GameLogic();
	int getScore();
	void rollAll();
	void rollSpec(bool kept[5]);
	void play();

};

#endif