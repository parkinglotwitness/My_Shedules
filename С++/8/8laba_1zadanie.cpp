// 8laba.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    // �������� ������
    char str[] = "uuuuuuuuuuuuuuuuuuu";
    for (int i = 0; i < strlen(str); i++)
    cout << str[i] << " ";
    cout << endl;
    system("pause");
    return 0;
}
