#include "Adres.h"

Adres::Adres()
{
	cout << "Load default constructor..." << endl;
	city = new char[20];
	city = "";
	street = new char[20];
	street = "";
	home = 0;
}

Adres::Adres(char *city, char *street, int home)
{
	cout << "Load constructor with parameters..." << endl;
	this->city = new char[20];
	strcpy(this->city, city);
	this->street = new char[20];
	strcpy(this->street, street);
	this->home = home;
}

Adres::Adres(Adres &adres)
{
	cout << "Load copy constructor..." << endl;
	this->city = new char[20];
	strcpy(this->city, adres.getCity());
	this->street = new char[20];
	strcpy(this->street, adres.getStreet());
	this->home = adres.getHome();
}

Adres::~Adres()
{
	cout << "Load destructor..." << endl;
	delete[] city;
}

void Adres::setCity(char *city)
{
	this->city = city;
}

void Adres::setStreet(char *street)
{
	this->street = street;
}

void Adres::setHome(int home)
{
	this->home = home;
}

char* Adres::getCity()
{
	return city;
}

char* Adres::getStreet()
{
	return street;
}

int Adres::getHome()
{
	return home;
}

void Adres::print()
{
	cout << "City: " << this->getCity() << "\tStreet: " << this->getStreet() << "\tHome: " << this->getHome() << endl;
}