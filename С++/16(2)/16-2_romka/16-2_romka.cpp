#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <ctime>

using namespace std;

void setRandom(vector<double>&v, int n) {
	for (int i = 0; i < n; i++) {
		int x = 5 - rand() % 10;
		v.push_back(x);
	}
}

void printVector(vector<double> v) {
	vector<double>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void printvector2(vector<double>&v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

bool pred(double a)
{
	return a == 0;
}

bool pred2(double it1, double it2)
{
	return (fabs(it1) > fabs(it2));
}


int main()
{
	srand((unsigned)time(0));
	vector<double> v;
	setRandom(v, 20);
	printVector(v);
	cout << "Min element is " << *min_element(v.begin(), v.end()) << endl;

	int cnt = count_if(v.begin(), v.end(), pred);

	if (cnt < 2)
	{
		cout << "Vector has less, than 2 zeros" << endl;
	}
	else {
		vector<double>::iterator it_start, it_end;
		for (auto i = v.begin(); i != v.end(); i++)
		{
			if (*i == 0)
			{
				it_start = i;
				break;
			}
		}

		for (auto i = it_start; i != v.end(); i++)
		{
			if (*i == 0)
			{
				it_end = i;
				break;
			}
		}

		double mul = 1;

		for (auto i = it_start; i != it_end; i++)
		{
			mul *= *i;
		}

		cout << "Multiply among first and second zero: " << mul << endl;
	}

	system("pause");
    return 0;
}

