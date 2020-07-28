#include <iostream>
using namespace std;

int main()
{
	int age = 15;
	cout << age << endl;

	if (age >= 16) 
	{
		cout << "You can drive!" << endl;
	}
	else
	{
		cout << "You cannot drive yet!" << endl;
	}

	//for loop
	for (int i = 1; i <= age; i++)
	{
		cout << "Happy birthday " << i << endl;
	}

	return 0;
}