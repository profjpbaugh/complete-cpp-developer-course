#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string fullName;

	cout << "Please enter your name" << endl;
	getline(cin, fullName);

	cout << "Please enter your age" << endl;
	cin >> age;

	cout << fullName << endl;

	cout << age << endl;
	return 0;
}