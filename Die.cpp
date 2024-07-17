#include "Die.h"
#include "GameLogic.h"

Die::Die() : SIDES(6)
{
	//Default constructor
	
	roll();
}

void Die::roll()
{
	//Changes the value of the die to a random number between 1 and 6
	GameLogic gamelogic;

	for (int i = 0; i < 5; i++)
	{
		faceValue = (rand() % SIDES + 1);
		dice[i] = faceValue;
	}
}

void Die::reRoll()
{
	//Try a switch
	
}

int Die::getFaceValue()
{
	//Returns the current face value

	return faceValue;

}

string Die::printDie()
{
	//Returns a string description of the Die

	string print;

	for (int i = 0; i < 5; i++)
	{
		string print = "You have rolled a " + dice[i];
		cout << endl;
	}
	return print;

}