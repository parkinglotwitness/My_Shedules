#pragma once
#include <string>

using namespace std;

// собственный класс для исключений
class Except
{
private:
	int type; // тип исключения
	string message; // пояснительное сообщение
public:
	Except();
	Except(int, const string);
	void setMessage(string message);
	void setType(int type);
	string getMessage();
	int getType();
};