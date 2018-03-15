#include "Plain.h"

Plain::Plain() :FLY()
{
	cout << "The default constructor of the class Plain..." << endl;
	potolok = 0;
	wings = 0;
	line = 0;
}


Plain::Plain(char *marka, char *model, bool type, int speed, int potolok, int wings, int line) : FLY(marka, model, type, speed)
{
	cout << "Constructor with parameters of the class Plain..." << endl;
	this->potolok = potolok;
	this->wings = wings;
	this->line = line;
}

Plain::~Plain()
{
	cout << "Destructor of the class Plain..." << endl;
	
}

void Plain::setPotolok(int potolok)
{
	this->potolok = potolok;
}

void Plain::setWings(int wings)
{
	this->wings = wings;
}

void Plain::setLine(int line)
{
	this->line = line;
}

int Plain::getPotolok()
{
	return potolok;
}

int Plain::getWings()
{
	return wings;
}

int Plain::getLine()
{
	return line;
}

void Plain::display()
{
	FLY::display();            //вызов метода display() базового класса FLY
	cout << "\tPotolok: " << potolok << "\tWings: " << wings << "\tLine: " << line << endl;
}

void Plain::input()
{
	FLY::input();          
	int potolok;
	int wings;
	int line;
	cout << "Potolok: ";
	cin >> potolok;
	cout << "Wings: ";
	cin >> wings;
	cout << "Line: ";
	cin >> line;
	this->setPotolok(potolok);
	this->setWings(wings);
	this->setLine(line);

}

// переопределяем чисто виртуальный метод базового класса 
void Plain::showMessage()
{
	cout << "This is a child class Plain..." << endl;
};