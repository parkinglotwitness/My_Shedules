#include <iostream>
using namespace std;
struct WORKER
{
	char surname[100]; // ������� 
	char post[100]; // ��������� 
	int date; // ��� �����������
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
		cout << "������� ���������� � ���������� �" << i + 1 << ":" << endl;
		cout << "1) �������: ";    cin >> mass[i].surname;
		cout << "2) ���������: "; cin >> mass[i].post;
		cout << "3) ��� ����������� �� ������: "; cin >> mass[i].date;
	}
	cout << "������� ���� ������ � ����������� (������� ��� 2017): ";
	cin >> staj;
	cout << "������� ����������, ��� ���� ������ � ����������� ��������� " << staj << " ���:" << endl;
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
		cout << "1) �������: ";    cout << mass[i].surname << endl;
		cout << "2) ���������: " << mass[i].post << endl;
		cout << "3) ��� ����������� �� ������: " << mass[i].date << endl;
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
		cout << "�����������." << endl;
	system("pause");
	return 0;
}