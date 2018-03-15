#include "rab.h"
#include <string>
#include <iostream>

using namespace std;
int main() {
	Rab rab("Gil", 3, 1);
	rab.print();
	cout << endl;
	Rab *rab1 = new Rab(rab);
	rab1->print();
	delete rab1;

	const int n = 3;

	Rab arr_rab[n];//massiv_objekt
	char name[20];
	int vozr;
	int stage;

	for (int i = 0; i < n; i++) {
		cout << "Name: ";
		cin >> name;
		cout << "Old year: ";
		cin >> vozr;
		cout << "Stage: ";
		cin >> stage;

		arr_rab[i].setName(name);
		arr_rab[i].setVozr(vozr);
		arr_rab[i].setStage(stage);
	}
	cout << endl;
	cout << "Print information: " << endl;
	for (int i = 0; i < n; i++) {
		arr_rab[i].print();
	}
	system("pause");
	return 0;
}