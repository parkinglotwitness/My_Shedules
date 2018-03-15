#include "SetChar.h" 

SetChar::SetChar()
{
	maxSize = 0;  	
	size = 0;
	arr = NULL;
}

SetChar::SetChar(int maxSize)
{
	this->maxSize = maxSize;  	
	arr = new char[maxSize];
	size = 0;
}

SetChar::SetChar(const SetChar &setchar)
{
	maxSize = setchar.maxSize;  	
	arr = new char[maxSize];
	size = setchar.size;
	for (int i = 0; i < size; i++)
	arr[i] = setchar.arr[i];
}

SetChar::~SetChar()
{
	delete[] arr;
}

// ��������� ���� �� ����� ������� � ��������� 
bool SetChar::in(char item)
{
	for (int i = 0; i < size; i++)  	 	
	if (arr[i] == item) return true;  	
	return false;
}

/* ���������� �������� � ��������� 
���������� ��������� += */
SetChar& SetChar::operator += (char item)
{
	/* ���������, ����� ������ �������� �� ���� � ��������� 
	� ����� ������� ������ �� �������� ������������� ������� ���������*/
	if (in(item) == false && size < maxSize)
	{
		arr[size] = item;
		size++;
	}
	return *this;
}

/* ���������� ��������� =
����� ���� ������ ����� ���� ��������� ������� */
SetChar& SetChar::operator = (SetChar &setchar)
{
	if (this == &setchar) // ���� ��� ������� ������ �����, �� ����� ��������� ������� ������   	 	
	return *this; 
	if (arr != NULL)
	delete[] arr;
	maxSize = setchar.maxSize;
	arr = new char[maxSize];
	size = setchar.size;
	for (int i = 0; i < size; i++)  	 
	arr[i] = setchar.arr[i];
	return *this;
}

/* ���������� ��������� ==
��������� ��������� �� ���������: ����� ������� � ���������� */ 
bool SetChar::operator == (SetChar &setchar)
{
	if (size != setchar.size)
	return false;
	// �������������� ������������� arr � setchar.arr  	
	for (int i = 0; i < size; i++)  	 	
	if (arr[i] != setchar.arr[i]) return false;
	return true;
}


/* ���������� ��������� [] ��� ��������� � �������� ������� �� �������  (� �������� �������� ������� ������ ������� ������) */
char& SetChar::operator [] (char ind)
{
	if (ind > size && ind < 0) ind = 0; 
	return arr[ind];
}


void SetChar::input(int size)
{
	if (size > maxSize) return;  	
	this->size = size;  	
	int i = 0;  	
	while (i < size){
		char item = (33 + rand() % 100);
		if (!in(item)) {
			arr[i] = item;
			i++;
		}
	}
}
void SetChar::print()
{
	for (int i = 0; i < size; i++)  	 	
		cout << "[" << arr[i] << "]" << "";
	cout << endl;
}

// ������������� ������� ��� �������� �������� ������ ����� ����� 
SetChar operator + (SetChar &s1, SetChar &s2)
{
	int maxTotalSize = s1.maxSize + s2.maxSize;  	
	SetChar result(maxTotalSize);
	for (int i = 0; i < s1.size; i++)
	{
		result.arr[i] = s1.arr[i];
	}
	result.size = s1.size;  	
	for (int i = 0; i < s2.size; i++)
	{
		result += s2.arr[i];
	}
	return result;
}

// ������������� ������� ��� ��������� �������� ������ ����� ����� 
SetChar operator * (SetChar &s1, SetChar &s2)
{
	int mSize;
	if (s1.maxSize > s2.maxSize) mSize = s1.maxSize; 
	else mSize = s2.maxSize;  	
	SetChar result(mSize);  	
	for (int i = 0; i < s1.size; i++)
	{
		for (int j = 0; j < s2.size; j++)
		if (s1.arr[i] == s2.arr[j]) result += s1.arr[i];
	}
	return result;
}
