#include <iostream>
#include <iomanip>

int *nepoytnayFunkciy(int*, int*, int*, int);
void zapol(int *, int);
int zadanie(int *, int);
void print(int *, int);
void sort(int*, int);

using namespace std;

int *nepoytnayFunkciy(int *arr1begin, int *arr2begin, int *arr3begin, int size)
{


	int a = zadanie(arr1begin, size);
	int b = zadanie(arr2begin, size);
	int c = zadanie(arr3begin, size);

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

int zadanie(int *begin, int size)
{

	int n = 0;
	for (int i = 0; i < size; i++)
	{
		if (begin[i]>0)
		{
			n++;
		}
	}
	return n;
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
			if (begin[j] > begin[j + 1])
			{
				int msx = begin[j];
				begin[j] = begin[j + 1];
				begin[j + 1] = msx;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int  size = 3;

	int *arr1 = new int[size];
	int *arr2 = new int[size];
	int *arr3 = new int[size];

	zapol(arr1, size);
	cout << "1 массив : ";
	print(arr1, size);
	cout << endl;
	zapol(arr2, size);
	cout << endl << "2 массив: ";
	print(arr2, size);
	cout << endl;
	zapol(arr3, size);
	cout << endl << "3 массив: ";
	print(arr3, size);
	cout << endl;
	int *i = nepoytnayFunkciy(arr1, arr2, arr3, size);
	cout << endl << "ћассив количество положительных элементов максимальным :  " << endl << endl;
	print(i, size);
	cout << endl;
	sort(i, size);
	cout << endl << "ќтсортированный массив количество положительных элементов максимальным :  " << endl << endl;
	print(i, size);
	cout << endl;

	system("pause");
	return 0;
}


