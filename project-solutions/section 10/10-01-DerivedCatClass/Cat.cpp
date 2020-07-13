#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(string name, double weight) : Animal(name, weight)
{
}

void Cat::chaseMouse() const
{
	cout << "I'm chasing a mouse!" << endl;
}

string Cat::makeNoise() const
{
	return "Meow!";
}

string Cat::eat() const
{
	return "Tasty kitty food!";
}