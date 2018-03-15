#ifndef ADRES_H
#define ADRES_H

#include <iostream>
#include <string>

using namespace std;

class Adres
{
private:
	char *city;
	char *street;
	int home;
public:
	Adres();
	Adres(char *city,char *street,int home);
	Adres(Adres &adres);
	~Adres();
	void setCity(char *city);
	void setStreet(char *street);
	void setHome(int home);
	char* getCity();
	char* getStreet();
	int getHome();
	void print();
};

#endif // !ADRES_H
