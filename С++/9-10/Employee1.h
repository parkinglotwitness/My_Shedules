#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using namespace std;

class Employee
{
private:
	char *name;
	int age;
	int experience;
public:
	Employee();
	Employee(char *name, int age, int experience);
	Employee(Employee &employee);
	void setName(char *name);
	void setAge(int age);
	void setExperience(int experience);
	char* getName();
	int getAge();
	int getExperience();
};

#endif