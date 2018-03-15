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

// проверяем есть ли такой элемент в множестве 
bool SetChar::in(char item)
{
	for (int i = 0; i < size; i++)  	 	
	if (arr[i] == item) return true;  	
	return false;
}

/* добавление элемента в множество 
перегрузка оператора += */
SetChar& SetChar::operator += (char item)
{
	/* проверяем, чтобы такого элемента не было в множестве 
	и чтобы текущий размер не превышал максимального размера множества*/
	if (in(item) == false && size < maxSize)
	{
		arr[size] = item;
		size++;
	}
	return *this;
}

/* перегрузка оператора =
чтобы один объект можно было присвоить другому */
SetChar& SetChar::operator = (SetChar &setchar)
{
	if (this == &setchar) // если два объекта класса равны, то сразу возращаем текущий объект   	 	
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

/* перегрузка оператора ==
проверяем множества на равенство: равны размеры и содержимое */ 
bool SetChar::operator == (SetChar &setchar)
{
	if (size != setchar.size)
	return false;
	// предварительно отсортировать arr и setchar.arr  	
	for (int i = 0; i < size; i++)  	 	
	if (arr[i] != setchar.arr[i]) return false;
	return true;
}


/* перегрузка оператора [] для обращения к элементу вектора по индексу  (к значению элемента массива внутри объекта класса) */
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

// дружественная функция для сложения объектов класса между собой 
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

// дружественная функция для умножения объектов класса между собой 
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
