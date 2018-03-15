#include <iostream>
#include "Except.h"


using namespace std;

// ������� ��� ������� ������� 1
double pervoe(double m, double n)
{
	if (m < 0 || n < 0)
		throw Except(1, "�������� ������ ����");
	if (m == 0 || n == 0)
		throw Except(2, "�������� ����� ����");
	return (((m - 1)*sqrt(m)) - ((n - 1)*sqrt(n))) / (sqrt(pow(m, 3)*n) + (n*m) + pow(m, 2) - m);
}

double vtoroe(double m, double n)
{

	if (m < 0 || n < 0)
		throw Except(1, "�������� ������ ����");
	if (m == 0 || n == 0)
		throw Except(2, "�������� ����� ����");
	return ((sqrt(m) - sqrt(n)) / m);
}



int main()
{
	setlocale(0, "");

	double a1;
	cout << "������� �������� m: ";
	cin >> a1;
	cout << endl;
	double a2;
	cout << "������� �������� n: ";
	cin >> a2;
	cout << endl;
	try
	{
		double z = pervoe(a1, a2);
		cout << z << endl;
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
		cout << "ERROR" << endl;
		system("pause");
		return 0;
	}

	try
	{
		double z = vtoroe(a1, a2);
		cout << z << endl;
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
		cout << "ERROR" << endl;
		system("pause");
		return 0;
	}

	system("pause");
	return 0;
	
}
