#include "ConsoleUI.h"
#include <iostream>
using namespace std;

int ConsoleUI::getKept()
{
	cout << "Which die would you like to keep?: ";
	cin >> kept;
	return kept;
}