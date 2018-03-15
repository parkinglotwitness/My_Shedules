#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Vector
{
private:
	int len;
	int maxLen;
	T *arr;
public:
	Vector();
	Vector(int maxLen);
	~Vector();
	void add(T item);
	void printArray();
	void operator -= (T a);
	double &operator [] (int i);
	void input(int count);
	friend Vector operator - (Vector &vct, double a);
};