#ifndef DIE_H
#define DIE_H

#include <iostream>
#include <string>
using namespace std;

class Die
{
private:
	int faceValue;
	const int SIDES;
	//int dice[5];
public:
	Die();
	void roll();
	void reRoll();
	int getFaceValue();
	string printDie();
};

#endif