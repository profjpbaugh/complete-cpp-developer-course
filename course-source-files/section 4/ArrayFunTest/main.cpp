#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 5> myIntArray{};

	myIntArray[0] = 2;
	myIntArray[1] = 5;
	myIntArray[2] = 10;
	myIntArray[3] = 1;
	myIntArray[4] = 17;

	for (int a : myIntArray)
	{
		cout << a << endl;
	}

	cout << "Size of array: " << myIntArray.size() << endl;

	return 0;
}