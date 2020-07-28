#include <iostream>
#include <string>
#include "Swapper.h"
using namespace std;

template <class T>
T getBigger(T a, T b);

template <class T>
T getSmaller(T a, T b);


int main()
{
	Swapper<int> intSwapper(5, 10);
	Swapper<string> stringSwapper("John", "Bob");

	string name1 = "John";
	string name2 = "Alice";

	double biggerDub = getBigger(3.14, 5.55);
	int biggerInt = getBigger(11, 9);
	string biggerStr = getBigger(name1, name2);

	double smallerDub = getSmaller(3.14, 5.55);
	int smallerInt = getSmaller(11, 9);
	string smallerStr = getSmaller(name1, name2);
	
	cout << "Bigger items: " << endl;
	cout << "\t" << biggerDub << endl;
	cout << "\t" << biggerInt << endl;
	cout << "\t" << biggerStr << endl;
	cout << endl << endl;

	cout << "Smaller items: " << endl;
	cout << "\t" << smallerDub << endl;
	cout << "\t" << smallerInt << endl;
	cout << "\t" << smallerStr << endl;
	cout << endl << endl;

	cout << "Testing the swapper!" << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
	cout << endl << endl;

	intSwapper.swap();
	stringSwapper.swap();

	cout << "After the swap..." << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
	cout << endl << endl;

	return 0;
}


template <class T>
T getBigger(T a, T b)
{
	if (a > b)
	{
		return a;
	}

	return b;
}

template <class T>
T getSmaller(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	
	return b;
}