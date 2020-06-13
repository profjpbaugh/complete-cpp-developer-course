#include <iostream>
#include "Circle.h"
using namespace std;

void printCircleData(const Circle& c);

int main()
{
	Circle circ1;
	Circle circ2(5);

	printCircleData(circ1);
	printCircleData(circ2);


	return 0;
}

void printCircleData(const Circle& c)
{
	cout << "Circle with radius " << c.getRadius() << endl;
	cout << "\tCircumference: " << c.circumference() << endl;
	cout << "\tArea: " << c.area() << endl;
	cout << endl;
}