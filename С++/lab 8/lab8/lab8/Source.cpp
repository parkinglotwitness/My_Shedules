#include <iostream>

using namespace std;

int main()
{
	string str =  "ghj  tyu j";
	string str1;
	int i, z = 0;
	for (i = 0; i < 10; i++) {
		if (str[i] != ' '&& str[i + 1] != ' ') {
			str1[z] = str[i];
			str1[z + 1] = ' ';
			z += 2;
		}
	}
//	str1[z - 1] = NULL;
//	cout << str1 << endl;
	system("pause");
	return 0;
}