#pragma once 

#include <iostream> 

using namespace std;

class SetChar
{
private:
	char *arr;  	
	int maxSize;  	
	int size;
public:
	SetChar();
	SetChar(int maxSize);
	SetChar(const SetChar &setchar);
	~SetChar();
	void input(int size);
	void print();
	bool in(char item); // проверка -> есть ли такой элемент в множестве 
	SetChar &operator = (SetChar &setchar);
	SetChar &operator += (char item);  	  
	char &operator [] (char ind);
	bool operator == (SetChar &setchar);
	friend SetChar operator + (SetChar &s1, SetChar &s2);  	
	friend SetChar operator * (SetChar &s1, SetChar &s2);
};
