#include <iostream>
#include <string>
#include "House.h"
using namespace std;

void printHouseData(const House& house);

int main()
{
	House myHouse;
	House yourHouse;
	House theirHouse(2, 10, "green");

	myHouse.print();

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("blue");


	/*printHouseData(myHouse);
	printHouseData(yourHouse);*/

	myHouse.print();
	yourHouse.print();

	theirHouse.print();


	return 0;
}

void printHouseData(const House& house)
{

	cout << "The house is " << house.getColor() << " and has "
		<< house.getNumStories() << " stories and "
		<< house.getNumWindows() << " windows." << endl;
}