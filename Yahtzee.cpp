//Jaxon
#include "Die.h"
#include "GameLogic.h"
#include "ConsoleUI.h"

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	
	GameLogic gamelogic;
	ConsoleUI consoleui;
	

	gamelogic.game();
	consoleui.displayFinalScore();
	

	return 0;

}