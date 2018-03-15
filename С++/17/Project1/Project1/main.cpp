#include <iostream>
#include "Except.h"

using namespace std;

double *createarray(int size)
{
	if (size < 0) throw Except(1, "Negative value!");
	if (size < 2) throw Except(2, "Few elements");
	try
	{
		return new double[size];
	}
	catch (bad_alloc& ba)
	{
		throw Except(3, ba.what());
	}
}

int main()
{
	double *arr = NULL;
	int size;
	cout << "Size: ";
	cin >> size;
	try
	{
		arr = createarray(size);
	}
	catch (Except &v)
	{
		cout << "Error code: " << v.getType() << endl;
		cout << "Text: " << v.getMessage() << endl;
		system("pause");
		return 0;
	}
	catch (...)
	{
		cout << "Error";
		system("pause");
		return 0;
	}
	cout << "Succesfully!" << endl;
	delete[] arr;
	system("pause");
	return 0;
}