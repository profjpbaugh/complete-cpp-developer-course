#include "Dog.h"

Dog::Dog(string name, string breed)
{
	this->name = name;
	this->breed = breed;
}

string Dog::getName() const
{
	return name;
}

string Dog::getBreed() const
{
	return breed;
}