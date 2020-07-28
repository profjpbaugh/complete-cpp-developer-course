#include <iostream>
using namespace std;

int main()
{
	//prompt user for age AND gender
	//age is int, gender is character
	//get of f or F and are 60 or over
	//You qualify for the discount!
	//You do not qualify for the discount

	int age;
	char gender;

	cout << "Please enter your age" << endl;
	cin >> age;

	cout << "Please enter your gender" << endl;
	cin >> gender;

	if ((gender == 'F' || gender == 'f') && age >= 60)
	{
		cout << "You qualify for the discount!" << endl;
	}
	else
	{
		cout << "You do not qualify for the discount!" << endl;
	}

	return 0;
}