#include <iostream> 
#include <stdlib.h> 
#include <ctime> 

using namespace std;
void mass(float arr[3] [3], const int row = 3, const int col = 3) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 35 - 10;
		}
	}
}
void vivodmass(float arr[3][3], const int row = 3, const int col = 3) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void summotr(float arr[3][3], const int col = 3) {
	int sum, str_bez = 0;
	bool flags;
	for (int i = 0; i < col; i++)
	{
		flags = false;
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < 0)
			{
				sum = 0;
				for (int k = 0; k < col; k++)
				{
					flags = true;
					sum += arr[i][k];
				}
			}
			else
				str_bez++;
		}

		if (flags == true)
			cout << "Сумма в строках с отрицательными элементами[" << i + 1 << "]: " << sum << "\n";
	}
}
void sedl(float arr[3][3], const int row = 3, const int col = 3) {
	float extremum = 0, max = 0;
	bool haveMin = false, haveMax = false;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			extremum = arr[i][0];
			for (int q = 0; q < col; q++)
			{
				if (arr[i][q] < extremum) extremum = arr[i][q];
			}

			if (arr[i][j] == extremum)
			{
				haveMax = true;
				max = arr[i][j];
			}

			if (haveMax)
			{
				extremum = arr[0][j];
				for (int q = 0; q < row; q++)
				{
					if (arr[q][j] > extremum) extremum = arr[q][j];

				}
				if (max == extremum) cout << "   Элемент: " << max << "  С индексами: " << "i: " << i << " j: " << j << endl;
				haveMax = !haveMax;
			}
		}
		cout << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand((unsigned)time(NULL));
	const int row = 3, col = 3;
	float arr[row][col];
	mass(arr, row, col);
	vivodmass(arr, row, col);
	summotr(arr, col);
	sedl(arr, row, col);
	system("pause");
	return 0;
}