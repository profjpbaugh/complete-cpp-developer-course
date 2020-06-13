#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle r1;
	Rectangle r2(5.0, 2.0);

	cout << "r1 area is " << r1.area() << endl;
	cout << "r2 area is " << r2.area() << endl;

	r1.setLength(22);
	r1.setWidth(12);

	cout << "r1 length is now " << r1.getLength() << endl;
	cout << "r1 width is now " << r1.getWidth() << endl;

	cout << "r1 area is NOW " << r1.area() << endl;

	cout << "r1 perimeter is " << r1.perimeter() << endl;
	cout << "r2 perimeter is " << r2.perimeter() << endl;

	return 0;
}