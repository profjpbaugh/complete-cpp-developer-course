#include <iostream>
using namespace std;

int sumArray(int myArray[], int arraySize);

int main()
{
	int myArray[]{ 2, 5, 2, 10, 20, 15, 100, 25 };
	int sum = sumArray(myArray, 8);

	cout << "Sum of the elements in myArray is " << sum << endl;

	return 0;
}

int sumArray(int myArray[], int arraySize)
{
	int sum = 0;

	for (int i = 0; i < arraySize; i++)
	{
		sum += myArray[i];  //sum = sum + myArray[i];
	}

	return sum;
}