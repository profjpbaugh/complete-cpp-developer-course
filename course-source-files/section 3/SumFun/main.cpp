#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int input;

	cout << "Enter a non-negative integer to sum, and negative integer to quit" << endl;
	cin >> input;
	while (input >= 0)
	{
		sum += input;
		cout << "Enter a non-negative integer to sum, and negative integer to quit" << endl;
		cin >> input;
	}

	cout << "Sum of the values: " << sum << endl;

	return 0;
}