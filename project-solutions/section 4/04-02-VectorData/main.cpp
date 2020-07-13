#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myIntVector;
	int input;

	//priming read
	cout << "Enter a positive integer to add to the vector, or "
		<< "negative integer to quit!" << endl;
	cin >> input;

	while (input >= 0)
	{
		myIntVector.push_back(input);
		cout << "Enter a positive integer to add to the vector, or "
			<< "negative integer to quit!" << endl;
		cin >> input;
	}

	cout << "Now here are double the amounts:" << endl;

	for (int num : myIntVector)
	{
		cout << num * 2 << endl;
	}

	return 0;
}