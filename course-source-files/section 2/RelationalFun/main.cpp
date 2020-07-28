/*
	Relational Operators
	>   greater than
	<   less than
	>=  greater than or equal to
	<=  less than or equal to
	==  equal to
	!=  not equal to
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << boolalpha;

	int a = 15;
	int b = 20;
	bool areEqual = (a == b);
	int age = 36;


	cout << (a < b) << endl;
	cout << areEqual << endl;
	cout << (age >= 21) << endl;

	return 0;
}