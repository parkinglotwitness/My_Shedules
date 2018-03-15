#pragma once
#include <iostream>

using namespace std;

class mass
{
private:
	int *arr;
	int maxSize;
	int size;

public:
	mass();
	~mass();
	mass(int maxSize); 
	mass(const mass &st1);
	void input(int size);
	void print();
	bool mass::in(int item);
	void obrat();
	void setarr(int &arr);//Zapis
	void setmaxSize(int maxSize);
	void setsize(int size);
	int *getarr();//Poluchenie
	int getmaxSize();
	int getsize();
};