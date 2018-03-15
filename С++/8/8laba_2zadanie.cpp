// 8laba_2zadanie.cpp : main project file.

#include "stdafx.h"
#include <iostream> 

using namespace std;
int main() 
{
	char str[] = "trpo und kpiyap"; 
    char s[] = "muter in hause"; 
 
    if(strstr(str, s)) 
        std::cout << "True " << std::endl; 
    else 
		std::cout << "False " << std::endl;
    system("pause");
    return 0;
}
