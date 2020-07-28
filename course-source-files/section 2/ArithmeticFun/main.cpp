/*
	Arithmetic operators
	+   addition operator
	-   subtraction operator
	*   multiplication operator
	/   division operator
	%   modulus operator
*/


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	int myInt = 5;

	result += 15;  //result = result + 15;

	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "Result = " << result << endl;

	cout << myInt << endl;
	myInt++;  //++myInt;    myInt += 1;     myInt = myInt + 1;
	cout << myInt << endl;
	myInt--;  //--myInt;    myInt -= 1;     myInt = myInt - 1;
	cout << myInt << endl;

	return 0;
}