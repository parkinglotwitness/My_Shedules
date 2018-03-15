#ifndef PLAIN_H
#define PLAIN_H

#include "FLY.h"
#include <iostream>
#include <string>

using namespace std;
class Plain : public FLY               //производный класс
{
private:
	int potolok;                    
	int wings;
	int line;	
public:
	Plain();
	Plain(char *marka, char *model, bool type , int speed, int potolok, int wings, int line);
	~Plain();
	void setPotolok(int potolok);
	void setWings(int wings);
	void setLine(int line);
	int getPotolok();
	int getWings();
	int getLine();
	void display() override;
	void input() override;
	virtual void showMessage(); // переопределение чисто виртуального метода базового класса
};

#endif //PLAIN_H