#ifndef CONSOLEUI_H
#define CONSOLEUI_H

class ConsoleUI
{
private:
	bool kept[5];
	
public:
	ConsoleUI();
	void displayDie();
	void getKept(bool kept[5]);
	void displayFinalScore();
};

#endif