#ifndef FLY_H
#define FLY_H

#include <iostream>
#include <string>

using namespace std;

class FLY                        //базовый класс
{
protected:                         //спецификатор доступа к полям
	char *marka;
	char *model;
	bool type;
	int speed;
public:
	FLY();
	FLY(char *marka, char *model, bool type, int speed);
	~FLY();
	void setMarka(char *marka);
	void setModel(char *model);
	void setType(bool type);
	void setSpeed(int speed);
	char* getMarka();
	char* getModel();
	bool getType();
	int getSpeed();
	virtual void display();
	virtual void input();
	virtual void showMessage() = 0;
};

#endif //FLY_H