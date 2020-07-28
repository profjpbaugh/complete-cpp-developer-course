#include <iostream>
using namespace std;

int main()
{
	int myLovelyInt = 150;
	double myDouble = 3.14;

	int* somePtr = &myLovelyInt;
	double* doublePtr = &myDouble;


	cout << "myLovelyInt is originally: " << myLovelyInt << endl;
	cout << "pointer holds value: " << somePtr << endl;
	cout << "pointer dereferenced: " << *somePtr << endl;

	*somePtr = 200;

	cout << "myLoveInt is now: " << myLovelyInt << endl;

	cout << doublePtr << endl;
	cout << *doublePtr << endl;

	return 0;
}