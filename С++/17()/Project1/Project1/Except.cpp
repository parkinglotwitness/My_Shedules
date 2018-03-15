#include "Except.h"

Except::Except()
{
	this->setType(0);
	this->setMessage("");
}

Except::Except(int type, const string message)
{
	this->setType(type);
	this->setMessage(message);
}

void Except::setMessage(string message)
{
	this->message = message;
}

void Except::setType(int type)
{
	this->type = type;
}

string Except::getMessage()
{
	return message;
}

int Except::getType()
{
	return type;
}