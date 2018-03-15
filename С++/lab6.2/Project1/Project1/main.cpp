#include <iostream>
#include <ctime>

using namespace std;

void mass(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 50;
		cout << arr[i] << " ";
	}
}
int maxg(int arr[], int n, int max) {
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int ming(int arr[], int n, int min) {
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
int razn(int min, int max, int vivod) {
	vivod = max - min;
	return vivod;
}
int main()
{
	srand((unsigned int)time(NULL));
	setlocale(0, "");
	cout << "Введите размерность массива: ";
	int n;
	cin >> n;
	const int h = 255;
	int arr[h];
	mass(arr, n);
	cout << endl;
	int maxp = arr[0], minp = arr[0], t = 0, m = 0;
	t = maxg(arr, n, maxp);
	cout << "Максимальный элемент: " << t << endl;
	m = ming(arr, n, maxp);
	cout << "Минимальный элемент: " << m << endl;
	int konez = 0;
	cout << "Разность между максимальным и минимальным элементом: " << razn(m, t, konez) << endl;
	system("pause");
	return 0;
}