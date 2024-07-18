#ifndef CONSOLEUI_H
#define CONSOLEUI_H

class ConsoleUI
{
private:
	bool kept[5];
	
public:
	ConsoleUI();
	void displayDie(Die dice [5]);
	void getKept(bool kept[5]);

};

#endif