#include "Die.h"

void Die::roll()
{
	//Changes the value of the die to a random number between 1 and 6

	faceValue = (rand() % SIDES + 1);

}

int Die::getFaceValue()
{
	//Returns the current face value

	return faceValue;

}

string Die::printDie()
{
	//Returns a string description of the Die
	string print = "You have rolled a";
	return print;

}