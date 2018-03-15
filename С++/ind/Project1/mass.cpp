#include "mass.h"
#include <iostream>

mass::mass() 
{
	maxSize = 0;
	size = 0;
	arr = NULL; 
}

mass::mass(int maxSize)
{
	this->maxSize = maxSize; 
	size = 0;  
	arr = new int[maxSize];
}

mass::mass(const mass &st1)
{
	maxSize = st1.maxSize; 
	arr = new int[maxSize]; 
	size = st1.size;  
	for (int i = 0; i < size; i++)
		arr[i] = st1.arr[i];
}
mass::~mass() 
{
	delete[] arr; 
}

bool mass::in(int item) 
{ 
	for (int i = 0; i < size; i++)   
		if (arr[i] == item) return true; 
	return false; 
}

void mass::input(int size) {
	if (size > maxSize) return;  this->size = size;  int i = 0;  while (i < size) {
		int item = (rand() % 10);
		if (!in(item))
		{ 
			arr[i] = item;    i++; 
		}
	}
}

void mass::print() 
{
	for (int i = 0; i < size; i++)   
		cout << arr[i] << " ";  
	cout << endl; 
}
void mass::setarr(int &st1) {
	this->arr, arr;
}

void mass::setmaxSize(int maxSize) {
	this->maxSize = maxSize;
}

void mass::setsize(int size) {
	this->size = size;
}

int *mass::getarr() {
	return arr;
}

int mass::getmaxSize() {
	return maxSize;
}

int mass::getsize() {
	return size;
}

void mass::obrat()
{
	//for (int i = size - 1; i >= 0; i--)
	//	cout << arr[i] << " ";
	//cout << endl;
	for (int i = 0, i_end = size / 2; i<i_end; ++i)
	{
		int d = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = d;
	}
}
