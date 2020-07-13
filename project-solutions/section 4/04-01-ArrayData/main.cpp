#include <iostream>
#include <array>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 5;

	array<int, ARRAY_SIZE> myInts;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter an integer" << endl;
		cin >> myInts[i];
	}

	cout << "Now here are double the amounts:" << endl;

	for (int num : myInts)
	{
		cout << num * 2 << endl;
	}

	return 0;
}