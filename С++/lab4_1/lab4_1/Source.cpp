#include <iostream>
#include <ctime>

using namespace std;
void massiv(double arr[255],int m) {
	for (int i = 0; i < m; i++) {
		arr[i] = rand() % 100 * 0.1 - 5;
		cout << arr[i] << " ";
	}
}
double minel(double arr[255], int m, double minb) {
	for (int i = 0; i < m; i++)
	{
		if (arr[i] < minb)
			minb = arr[i];
	}
	return minb;
}
double index1(double arr[255], int m, double ming) {
	ming = arr[m - 1];
	for (int i = m - 1; i  >= 0; i--)
	{
		if (arr[i] > 0)
			ming = i;
	}
	return ming;
}
double index2(double arr[255], int m, double maxg) {
	for (int i = 0; i < m; i++)
	{
		if (arr[i] > 0)
			maxg = i;
	}
	return maxg;
}
double summ(double arr[255], double ming, double maxg, double sumg) {
	for (int i = ming + 1; i < maxg; i++)
	{
		sumg += arr[i];
	}
	return sumg;
}
int main()
{
	srand((unsigned int)time(NULL));
	setlocale(0, "");
	cout << "Введите размерность массива ";
	int h;
	double i;
	cin >> h;
	double arr[255];
	massiv(arr, h);
	cout << endl;
	double min = arr[0];
	i = minel(arr, h, min);
	cout << "Минимальный элемент масиива: " << i << endl;
	double minp = arr[h - 1];
	double maxp = arr[0];
	int minx = index1(arr, h, minp);
	cout << "Индекс первого положительного элемента массива: " << minx << endl;
	int maxx = index2(arr, h, maxp);
	cout << "Индекс последнего положительного элемента массива: " << maxx << endl;
	double sum = 0;
	i = summ(arr, minx, maxx, sum);
	cout << "Сумма элементов массива, расположенных между первым и последним положительными элементами: " << i << endl;
	cout << endl;
	system("pause");
	return 0;
}