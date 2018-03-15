#pragma once

#include <string>

using namespace std;
class Except
{
private:
	int type;
	string message;
public:
	Except();
	Except(int, const string);
	void setMessage(string message);
	void setType(int type);
	string getMessage();
	int getType();
};

