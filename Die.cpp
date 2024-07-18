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
		
	faceValue = (rand() % SIDES + 1);
}

int Die::getFaceValue()
{
	//Returns the current face value

	return faceValue;

}
