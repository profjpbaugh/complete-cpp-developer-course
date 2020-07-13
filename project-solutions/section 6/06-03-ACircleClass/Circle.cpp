#include "Circle.h"
#include <cmath>
using namespace std;

//const double MY_PI = 3.14159;

Circle::Circle() : MY_PI(3.14159)
{
	radius = 1;
}

Circle::Circle(double radius) : MY_PI(3.14159)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::circumference() const
{
	//C = 2 * pi * r
	return 2 * MY_PI * radius;
}

double Circle::area() const
{
	//A = pi * r^2
	return MY_PI * pow(radius, 2);
}