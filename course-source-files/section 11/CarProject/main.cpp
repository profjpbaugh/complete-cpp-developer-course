#include <iostream>
#include <memory>
#include "Car.h"
using namespace std;

int main()
{
	auto myCarPtr = make_unique<Car>("red", 4);

	cout << myCarPtr->getColor() << endl;
	cout << myCarPtr->getNumDoors() << endl;

	return 0;
}