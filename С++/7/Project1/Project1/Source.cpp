//#include "stdafx.h"
#include <time.h>
#include <iostream>
using namespace std;

const int n = 5;

void randArr(int *mas) {
	for (int i = 0; i < n; i++)
		mas[i] = rand() % 20 - 10;
}
void vivod(int *mas) {
	for (int i = 0; i < n; i++)
		cout << mas[i] << "  ";
}
int calcOtr(int *mas) {
	int s = 0;
	int s1 = 0;
	bool p1 = 1, p2 = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0)
			s++;
	}
	return s;
}
int *searchArray(int *mas1, int *mas2, int *error = 0) {
	int cnt1 = calcOtr(mas1), cnt2 = calcOtr(mas2);


	if (cnt1 < cnt2)
		return mas1;
	else
		return mas2;
}

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int *mas)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (mas[i] <mas[j])
				swap(&mas[i], &mas[j]);
			if (mas[i + n]>mas[j + n])
				swap(&mas[i + n], &mas[j + n]);
		}
	cout << "Sorting arr: ";
	for (int i = 0; i < n; i++)
		cout << mas[i] << "  ";
}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[n], arr2[n], arr3[n];
	randArr(arr1);
	cout << ("arr1 =   "); vivod(arr1);
	cout << endl;
	cout << endl;
	randArr(arr2);
	cout << ("arr2 =   "); vivod(arr2);
	cout << endl;
	cout << endl;
	randArr(arr3);
	cout << ("arr3 =   "); vivod(arr3);
	cout << endl;

	int *min = searchArray(arr1, arr2);
	min = searchArray(min, arr3);

	cout << "Massive default = "; vivod(min); cout << endl;
	cout << endl;
	sort(min);
	cout << endl;
	system("pause");
	return 0;
}