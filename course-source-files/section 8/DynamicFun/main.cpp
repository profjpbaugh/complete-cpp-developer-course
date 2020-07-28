#include <iostream>
using namespace std;

int main()
{
	int* myIntPtr = new int;
	bool* myBoolPtr = new bool;

	*myIntPtr = 123;
	*myBoolPtr = true;

	cout << *myIntPtr << endl;
	cout << boolalpha << *myBoolPtr << endl;

	delete myIntPtr;
	delete myBoolPtr;

	myIntPtr = nullptr;
	myBoolPtr = nullptr;

	return 0;
}