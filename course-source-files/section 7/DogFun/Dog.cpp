#include "Dog.h"
#include <stdexcept>
using namespace std;

Dog::Dog(string breed)
{
	if (breed != "poodle" && breed != "Poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? That's not a real dog!");
	}
}

string Dog::getBreed() const
{
	return breed;
}