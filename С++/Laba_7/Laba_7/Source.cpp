#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <cctype>
#include <stdio.h>


int *function(int*, int*, int*, int);
void zapol(int *, int);
int sred(int *, int);
void print(int *, int);
void sort(int*, int);

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));


	const int  size = 20;

	int *arr1 = new int[size];
	int *arr2 = new int[size];
	int *arr3 = new int[size];



	zapol(arr1, size);
	cout << "Первый массив" << endl << endl;
	print(arr1, size);

	zapol(arr2, size);
	cout << endl << "Второй массив" << endl << endl;
	print(arr2, size);

	zapol(arr3, size);
	cout << endl << "Третий массив" << endl << endl;
	print(arr3, size);

	int *i = function(arr1, arr2, arr3, size);
	cout << endl << "Массив самым большим средним значением :  " << endl << endl;
	print(i, size);
	cout << endl << endl;
	sort(i, size);
	cout << endl << "Отсортированный массив самым большим средним значением :  " << endl << endl;
	print(i, size);
	cout << endl << endl;

	system("pause");
	return 0;
}

int *function(int *arr1begin, int *arr2begin, int *arr3begin, int size)
{


	int a = sred(arr1begin, size);
	int b = sred(arr2begin, size);
	int c = sred(arr3begin, size);

	if (a > b && a > c)
	{
		return arr1begin;
	}

	if (b > a && b > c)
	{
		return arr2begin;
	}

	if (c >  b && c > a)
	{
		return arr3begin;
	}
}


int sred(int *begin, int size)
{

	int caf = 0;
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += begin[i];
		caf++;
	}
	summa = summa / caf;
	return summa;
}

void print(int *begin, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << begin[i] << setw(4);
	}
}

void zapol(int *begin, int size)
{

	for (int i = 0; i < size; i++)
	{
		begin[i] = rand() % 21 - 10;
	}
}

void sort(int *begin, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (begin[j] < begin[j + 1])
			{
				int msx = begin[j];
				begin[j] = begin[j + 1];
				begin[j + 1] = msx;
			}
		}
	}
}