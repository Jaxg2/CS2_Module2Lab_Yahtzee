#include "Die.h"


Die::Die() : SIDES(6)
{
	//Default constructor
	
	roll();
}

void Die::roll()
{
	//Changes the value of the die to a random number between 1 and 6

	for (int i = 0; i < 5; i++)
	{
		faceValue = (rand() % SIDES + 1);
		dice[i] = faceValue;
	}
}

void Die::reRoll()
{

}

int Die::getFaceValue()
{
	//Returns the current face value

	return faceValue;

}

string Die::printDie()
{
	//Returns a string description of the Die

	string print = "You have rolled a " + faceValue;
	return print;

}