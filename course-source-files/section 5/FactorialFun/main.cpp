#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int fact6 = factorial(6);

	cout << "The factorial of 6 is " << fact6 << endl;

	return 0;
}

int factorial(int num)
{
	if (num > 1)
	{
		return num * factorial(num - 1);
	}

	return 1;
}