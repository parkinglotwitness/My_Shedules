#include <iostream>
#include <ctime>

using namespace std;

int n, i, j, y;
int a[20], b[20], c[20], sum = 0;

void mas1()
{
	for (int i = 0; i<20; i++) // ���� �� ���� ��������� �������    
		a[i] = rand() % 20 - 10;
	cout << a[i];
}
void mas2()
{
	for (int j = 0; j<20; j++) // ���� �� ���� ��������� �������    
		b[j] = rand() % 20 - 10;
	cout << b[j];
}
void mas3()
{

	for (int y = 0; y<20; y++) // ���� �� ���� ��������� �������    
		c[y] = rand() % 20 - 10;
	cout << c[y];
}

int main()
{
	setlocale(LC_ALL, "rus");
	mas1();
	mas2();
	mas3();
	  

	


	//cout << "������� ������:\n";
	//for (i = 0; i<n; i++)
	//	cin >> a[i];
	//for (i = 0; i<n; i++)
	//	sum += a[i];
	//cout << "������� ��������������:\n" << sum / n << endl;
	system("pause");
	return 0;
}