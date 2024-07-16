#include "ConsoleUI.h"
#include <iostream>
using namespace std;

ConsoleUI::ConsoleUI()
{
	getKept();
}

int ConsoleUI::getKept()
{
	cout << "Which die would you like to keep?: ";
	cin >> kept;
	return kept;
}