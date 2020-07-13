#include "Alien.h"

#include <cstdlib>
#include <ctime>
using namespace std;

Alien::Alien(int weight, int height, char gender)
{
	this->weight = weight;
	this->height = height;
	this->gender = gender;
}

int Alien::getWeight() const
{
	return weight;
}

int Alien::getHeight() const
{
	return height;
}

char Alien::getGender() const
{
	return gender;
}

int Alien::getPrestige() const
{
	int genderValue;

	if (gender == 'M')
	{
		genderValue = 2;
	}
	else
	{
		genderValue = 3;
	}

	return weight * height * genderValue;
}

bool Alien::operator==(Alien& other) const
{
	return getPrestige() == other.getPrestige();
}

bool Alien::operator!=(Alien& other) const
{
	return getPrestige() != other.getPrestige();
}

bool Alien::operator>(Alien& other) const
{
	return getPrestige() > other.getPrestige();
}

bool Alien::operator>=(Alien& other) const
{
	return getPrestige() >= other.getPrestige();
}

bool Alien::operator<(Alien& other) const
{
	return getPrestige() < other.getPrestige();
}

bool Alien::operator<=(Alien& other) const
{
	return getPrestige() <= other.getPrestige();
}

Alien Alien::operator+(Alien& other) const
{
	srand(time(nullptr));

	int randNum = rand() % 10 + 1;  //1-10 inclusive 

	char newGender;

	int newWeight = (weight + other.weight) / 2;
	int newHeight = (height + other.height) / 2;

	if (randNum < 4)
	{
		newGender = 'F';
	}
	else
	{
		newGender = 'M';
	}

	return Alien(newWeight, newHeight, newGender);
}

void Alien::operator=(Alien& other)
{
	weight = other.weight;
	height = other.height;
	gender = other.gender;
}