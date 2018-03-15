#include <iostream>;

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Лабораторная работа №2" << endl;
	cout << "Впишите координату x" << endl;
	int x;
	int y;
	cin >> x;
	if (x >= -8 && x <= -5)
	{
		y = -3;
		cout << "y = ", y << endl;
	}
	system("pause");
	return 0;
}