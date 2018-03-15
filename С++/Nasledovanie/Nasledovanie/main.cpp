#include "FLY.h"
#include "Plain.h"
#include "Helecopter.h"

using namespace std;

int main()
{
	const int N = 3;  /* массив указателей на объект базового класса,   в нем будем хранить указатели на объекты производных классов */
	FLY *object_array[N];

	// выбор и создание объектов производного класса  
	for (int i = 0; i < N; i++)
	{
		FLY *temp;
		cout << "Select an object to create: 0 - Helecopter, 1 - Plain => ";
		int choice;   cin >> choice;
		switch (choice)
		{
		case 0:
			temp = new Helecopter();
			break;
		case 1:
			temp = new Plain();
			break;
		default:
			cout << "Incorrect value entered!" << endl;
			break;
		}
		object_array[i] = temp;
		object_array[i]->input();
	}
	cout << endl;

	// вывод данных из объектов на экран  system("cls");  
	for (int i = 0; i < N; i++)
	{
		object_array[i]->display();
		object_array[i]->showMessage();
	}

	for (int i = 0; i < N; i++)
		delete object_array[i];

	system("pause");
	return 0;
}