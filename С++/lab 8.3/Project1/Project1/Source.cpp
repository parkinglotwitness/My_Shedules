#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	size_t i;

	while ((i = str.find(',')) != string::npos)
		str.erase(i, 1);
	cout << str << endl;
	system("pause");
	return 0;
}