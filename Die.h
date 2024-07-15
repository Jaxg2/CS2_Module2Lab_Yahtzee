#pragma once
#ifndef DIE
#define DIE

#include <iostream>
#include <string>
using namespace std;

class Die
{
private:
	int faceValue;
	const int SIDES;
public:
	void roll();
	int getFaceValue();
	string printDie();
};

#endif