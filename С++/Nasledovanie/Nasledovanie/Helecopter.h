#ifndef HELECOPTER_H
#define HELECOPTER_H

#include "FLY.h"
#include <iostream>
#include <string>

using namespace std;
class Helecopter : public FLY               //производный класс
{
private:
	int screw; 
	int diameters;
	int gruz;
public:
	Helecopter();
	Helecopter(char *marka, char *model, bool type, int speed, int screw, int diameters, int gruz);
	~Helecopter();
	void setScrew(int screw);
	void setDiameters(int diameters);
	void setGruz(int gruz);
	int getScrew();
	int getDiameters();
	int getGruz();
	void display() override;
	void input() override;
	virtual void showMessage(); // переопределение чисто виртуального метода базового класса
};

#endif //HELECOPTER_H