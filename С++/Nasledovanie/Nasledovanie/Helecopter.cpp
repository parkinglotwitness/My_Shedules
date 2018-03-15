#include "Helecopter.h"

Helecopter::Helecopter() :FLY()
{
	cout << "The default constructor of the class Helecopter..." << endl;
	screw = 0;
	diameters = 0;
	gruz = 0;
}



Helecopter::Helecopter(char *marka, char *model, bool type, int speed, int screw, int diameters, int gruz) : FLY(marka, model, type, speed)
{
	cout << "Constructor with parameters of the class Helecopter..." << endl;
	this->screw = screw;
	this->diameters = diameters;
	this->gruz = gruz;
}

Helecopter::~Helecopter()
{
	cout << "Destructor of the class Helecopter..." << endl;

}

void Helecopter::setScrew(int screw)
{
	this->screw = screw;
}

void Helecopter::setDiameters(int diameters)
{
	this->diameters = diameters;
}

void Helecopter::setGruz(int gruz)
{
	this->gruz = gruz;
}

int Helecopter::getScrew()
{
	return screw;
}

int Helecopter::getDiameters()
{
	return diameters;
}

int Helecopter::getGruz()
{
	return gruz;
}

void Helecopter::display()
{
	FLY::display();            //вызов метода display() базового класса FLY
	cout << "Screw: " << screw << "\tDiameters: " << diameters << "\tGruz: " << gruz << endl;
}

void Helecopter::input()
{
	FLY::input();           //вызов метода display() базового класса Video
	int screw;
	int diameters;
	int gruz;
	cout << "Screw: ";
	cin >> screw;
	cout << "diameters: ";
	cin >> diameters;
	cout << "gruz: ";
	cin >> gruz;
	this->setScrew(screw);
	this->setDiameters(diameters);
	this->setGruz(gruz);

}
// переопределяем чисто виртуальный метод базового класса 
void Helecopter::showMessage()
{
	cout << "This is a child class Helecopter..." << endl;
};