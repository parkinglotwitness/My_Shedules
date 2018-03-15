#include <iostream> 
#include <string>

using namespace std;
int main()
{
	setlocale(0, "Russian");
	string str = "pp";
	string s = "pp";
	if (str == s)
	{
		cout << "True " << endl;
	}
	else {
		cout << "False " << endl;
	}
	system("pause");
	return 0;
}