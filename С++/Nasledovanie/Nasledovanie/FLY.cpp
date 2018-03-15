#include "FLY.h"

FLY::FLY()
{
	cout << "The default constructor of the class FLY..." << endl;
	marka = new char[40];
	model = new char[40];
	type = 0;
	speed = 0;
}

FLY::FLY(char *marka, char *model, bool type,int speed)
{
	cout << "Constructor with parameters of the class FLY..." << endl;
	this->marka = new char[40];
	strcpy(this->marka, marka);
	this->model = new char[40];
	strcpy(this->model, model);
	this->type = type;
	this->speed = speed;
}

FLY::~FLY()
{
	cout << "Destructor of the class FLY..." << endl;
	delete[] marka;
	delete[] model;
}

void FLY::setMarka(char *marka)
{
	strcpy(this->marka, marka);
}

void FLY::setModel(char *model)
{
	strcpy(this->model, model);
}

void FLY::setType(bool type)
{
	this->type = type;
}

void FLY::setSpeed(int speed)
{
	this->speed = speed;
}

char* FLY::getMarka()
{
	return marka;
}

char* FLY::getModel()
{
	return model;
}

bool FLY::getType()
{
	return type;
}

int FLY::getSpeed()
{
	return speed;
}

void FLY::display()
{
	cout << "\tMarka: " << marka << "\tModel: " << model << "\tType: " << type << "\tSpeed: " << speed << endl;
}

void FLY::input()
{
	char marka[20];
	char model[20];
	bool type;
	int speed;
	cout << "Marka:";
	cin >> marka;
	cout << "Model: ";
	cin >> model;
	cout << "Type: ";
	cin >> type;
	cout << "Speed: ";
	cin >> speed;
	this->setMarka(marka);
	this->setModel(model);
	this->setType(type);
	this->setSpeed(speed);
};