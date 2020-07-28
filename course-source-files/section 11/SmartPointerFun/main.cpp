#include <iostream>
#include <memory>
using namespace std;

int main()
{
	const int ARR_SIZE = 5;

	unique_ptr<double> myDubPtr = make_unique<double>();
	auto myArray = make_unique<int[]>(ARR_SIZE);

	*myDubPtr = 3.14;
	cout << "pointer value: " << *myDubPtr << endl;

	unique_ptr<double> otherPtr = move(myDubPtr);

	cout << "other pointer is: "<<*otherPtr << endl;

	for (int i = 0; i < ARR_SIZE; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}

	return 0;
}