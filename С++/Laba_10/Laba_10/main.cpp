#include <iostream>
#include <string>
#include "Adres.h"

using namespace std;

int main()
{
	cout << "adres1 => " << endl;
	Adres adres1("Polotsk", "Shmidta", 20);
	adres1.print();

	cout << endl << "adres2 => " << endl;
	Adres *adres2 = new Adres(adres1);
	adres2->print();
	delete adres2;
	
	cout << endl << "array_adres[n] => " << endl;
	const int n = 3;
	Adres array_adres[n];
	char city[20];
	char street[20];
	int home;
	for (int i = 0; i < n; i++)
	{
		cout << "City: ";
		cin >> city;
		cout << "Street: ";
		cin >> street;
		cout << "Home: ";
		cin >> home;
		array_adres[i].setCity(city);
		array_adres[i].setStreet(street);
		array_adres[i].setHome(home);
	}
	for (int i = 0; i < n; i++)
	{
		array_adres[i].print();
	}

	system("pause");
	return 0;
}