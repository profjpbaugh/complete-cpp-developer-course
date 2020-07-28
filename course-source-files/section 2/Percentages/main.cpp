#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;

	cout << "What is your project score?  0 - 100" << endl;
	cin >> initialScore;

	cin.get();  

	cout << "What is your full name?" << endl;
	getline(cin, fullName);

	cout << "What is your city, state/province, and country?" << endl;
	getline(cin, location);

	cout << "Hello, " << fullName << endl;
	cout << "We heard you were from " << location << endl;
	cout << "Your initial score is " << initialScore << endl;
	cout << "But with five points added, your score is now " << (initialScore + 5) << endl;

	return 0;
}