#include <iostream>
using namespace std;

void printSomething();
void printMyName();

int main()
{
	printSomething();
	printMyName();
	return 0;
}

void printSomething()
{
	cout << "Hey!  Look I'm here!" << endl;
}

void printMyName()
{
	cout << "John Baugh" << endl;
}