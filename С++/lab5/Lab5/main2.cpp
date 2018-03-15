#include <iostream>
using namespace std;
struct WORKER
{
	char surname[100]; // фамилия 
	char post[100]; // должность 
	int date; // год поступления
};
int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 3;
	int staj;
	bool f = true;
	WORKER mass[N];
	for (int i = 0; i < N; ++i)
	{
		cout << "Введите информацию о сотруднике №" << i + 1 << ":" << endl;
		cout << "1) Фамилия: ";    cin >> mass[i].surname;
		cout << "2) Должность: "; cin >> mass[i].post;
		cout << "3) Год поступление на работу: "; cin >> mass[i].date;
	}
	cout << "Введите стаж работы в организации (текущий год 2017): ";
	cin >> staj;
	cout << "Фамилии работников, чей стаж работы в организации превышает " << staj << " лет:" << endl;
	int j = 0;
	for (int i = 0; i<N; i++)
		{
			if (mass[i].surname[0] < mass[i + 1].surname[0])
			{
				swap(mass[i], mass[i + 1]);
			}
			else if (mass[i].surname[0] == mass[i+1].surname[0])
			{
				if (mass[i].surname[1] < mass[i+1].surname[1])
				{
					swap(mass[i], mass[i+1]);
				}
		}
	}
	for (int i = 0; i < N; ++i)
	{
		cout << "1) Фамилия: ";    cout << mass[i].surname << endl;
		cout << "2) Должность: " << mass[i].post << endl;
		cout << "3) Год поступление на работу: " << mass[i].date << endl;
	}
	for (int i = 0; i < N; ++i)
	{
		if ((2010 - mass[i].date) > staj)
		{
			cout << mass[i].surname << endl;
			f = false;
		}
	}
	if (f)
		cout << "Отсутствуют." << endl;
	system("pause");
	return 0;
}