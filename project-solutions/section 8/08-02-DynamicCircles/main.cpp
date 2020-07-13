#include <iostream>
#include "Circle.h"
using namespace std;

void printCircles(Circle** circleArray, int numCircles);

int main()
{
	int howMany = 0;
	int radius = 0;

	cout << "How many circles would you like to make?" << endl;
	cin >> howMany;

	Circle** circles = new Circle* [howMany];

	for (int i = 0; i < howMany; i++)
	{
		cout << "What radius for circle " << i << "?" << endl;
		cin >> radius;
		circles[i] = new Circle(radius);
	}

	cout << endl;

	printCircles(circles, howMany);

	//delete individual circles
	for (int i = 0; i < howMany; i++)
	{
		delete circles[i];
		circles[i] = nullptr;
	}

	delete[] circles;

	return 0;
}

void printCircles(Circle** circleArray, int numCircles)
{
	for (int i = 0; i < numCircles; i++)
	{
		cout << "Circle " << i << endl;
		cout << "\t" << circleArray[i]->circumference() << endl;
		cout << "\t" << circleArray[i]->area() << endl;
		cout << endl;
	}
}