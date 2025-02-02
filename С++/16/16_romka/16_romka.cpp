#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include "time.h"

#define type unsigned

using namespace std;

void setRandom(vector<type>&v, int n) {
	for (int i = 0; i < n; i++) {
		v.push_back(rand() % 10);
	}
}

void printVector(vector<type>&v) {
	vector<type>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
	
void printvector2(vector<type>&v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

bool pred(int item) {
	return item < 4;
}

bool pred2(int item) {
	return item % 2 == 0;
}

void setIterator(vector<type>&ls, vector<type>::iterator &it, int pos) {
	it = ls.begin();
	for (int i = 0; i <= pos; i++, it++);
}

int main()
{
//	srand(time(NULL));
	vector<type> v1;
	setRandom(v1, 10);
	printVector(v1);

	vector<type>::iterator it = min_element(v1.begin(), v1.end());
	cout << "Min element is " << *it << endl; 
	cout << "Write element ";
	int sa;
	cin >> sa;
	it = find(v1.begin(), v1.end(), sa);
	if (it != v1.end())
		cout << "item " <<sa <<" found" << endl;
	else
		cout << "item "<< sa <<" not found" << endl;
	int cnt = count_if(v1.begin(), v1.end(), pred);
	cout << "Cont of elements lesser than 4 "<< cnt << endl;
	vector<type>::iterator it_start, it_end;
	int s, e;
	cout << "Write starting: ";
	cin >> s;
	cout << "Write end: ";
	cin >> e;
	setIterator(v1, it_start, s - 1);
	setIterator(v1, it_end, e - 1);
	v1.erase(it_start, it_end);
	cout << "Erasing elements from " <<s <<" to "<<e << endl;
	printVector(v1);
	cout << "Write position insert?";
	int f;
	cin >> f;
	setIterator(v1, it_start, f-2);
	cout << "Inserting 22 to " << f << " element" << endl;
	v1.insert(it_start, 22);
	printVector(v1);
	system("pause");
	return 0;
}

