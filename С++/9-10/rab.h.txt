#pragma once
#include <iostream>
#include <string>

using namespace std;
class Rab {
private:
	char *name;
	int vozr;
	int stage;
public:
	Rab();
	Rab(char *name, int vozr, int stage);
	Rab(Rab &rab);
	~Rab();
	void setName(char *name);//Zapis
	void setVozr(int vozr);
	void setStage(int stage);
	char *getName();//Poluchenie
	int getVozr();
	int getStage();
	void print();
};