#include <iostream>
using namespace std;

int main()
{
	double num1;
	double num2;
	double num3;
	double average;

	cout << "Please enter a real number" << endl;
	cin >> num1;

	cout << "Now, enter another real number" << endl;
	cin >> num2;

	cout << "Now, enter the final real number" << endl;
	cin >> num3;

	average = (num1 + num2 + num3) / 3;

	cout << "Average is " << average << endl;

	return 0;
}