#define _CRT_SECURE_NO_WARNINGS
#include "rab.h"
#include <cstring>
#include <iostream>
#include <windows.h>

using namespace std;

Rab :: Rab() {
	cout << "Default" << endl;
	name = new char[20];
	strcpy(name, "");
	vozr = 0;
	stage = 0;
}
Rab::Rab(char *name, int vozr, int stage) {
	cout << "Parametrs" << endl;
	this->name = new char[20];
	strcpy(this->name, name);
	this->vozr = vozr;
	this->stage = stage;
}

Rab::Rab(Rab &rab) {
	cout << "Copy" << endl;
	this->name = new char[20];
	strcpy(this->name, rab.getName());
	this->vozr = rab.getVozr();
	this->stage = rab.getStage();
}

Rab::~Rab() {
	cout << "Destroy" << endl;
	delete[] name;
}

void Rab::setName(char *name) {
	strcpy(this->name, name);
}

void Rab::setVozr(int vozr) {
	this->vozr = vozr;
}

void Rab::setStage(int stage) {
	this->stage = stage;
}

char *Rab::getName() {
	return name;
}

int Rab::getVozr() {
	return vozr;
}

int Rab::getStage() {
	return stage;
}

void Rab::print() {
	cout << "Name: " << this->getName() << endl;
	cout << "Old year: " << this->getVozr() << endl;
	cout << "Stage: " << this->getStage() << endl;
}
