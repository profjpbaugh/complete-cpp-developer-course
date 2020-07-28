#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rect1(10, 20);
	Rectangle rect2(50, 100);
	Rectangle rect3(10, 20);
	Rectangle resultRect;

	resultRect = rect1 + rect2;

	cout << "rect1 == rect3? " << boolalpha << (rect1 == rect3) << endl;

	cout << "rect1 != rect2? " << boolalpha << (rect1 != rect2) << endl;

	cout << endl << endl;
	cout << "resultRectangle length * width: " << resultRect.getLength() 
		 << " * " << resultRect.getWidth() << endl;
	cout << "resultRectangle area: " << resultRect.area() << endl;



	return 0;
}