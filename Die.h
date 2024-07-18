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
public:
	Die();
	void roll();
	int getFaceValue();
};

#endif