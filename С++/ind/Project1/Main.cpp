#include <iostream>
#include "mass.h"
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	mass st1(10);
	cout << "st1: " << endl;
	st1.input(5);
	st1.print();
	cout << "1ts: " << endl;
	st1.obrat();
	st1.print();
	system("pause");
}