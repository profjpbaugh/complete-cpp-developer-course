#include <iostream>
#include <stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int num);

int main()
{
	int input;

	try
	{
		cout << "Enter a number to process!" << endl;
		cin >> input;
		doSomething(input);
		cout << "Yay!  main was able to completely "
			<< "process the num!" << endl;
	}
	catch (const invalid_argument & err)
	{
		cout << "main says there is an error!" << endl;
		cout << err.what() << endl;
	}
	catch (const out_of_range & err)
	{
		cout << "main says the number is too big!" << endl;
		cout << err.what() << endl;
	}

	return 0;
}

void processPositive(int num)
{
	cout << "Welcome to the positive integer processor!" << endl;

	if (num > 100)
	{
		cout << "processPositive says the number is too big!" << endl;
		throw out_of_range("Number cannot be greater than 100!");
	}
	else if (num >= 0)
	{
		cout << "Good job!  You passed in a positive num to processPositive" << endl;
	}
	else
	{
		throw invalid_argument("Negative number passed in!");
	}
}

void doSomething(int num)
{
	try
	{
		processPositive(num);
		cout << "Yay! doSomething could process that num!" << endl;
	}
	catch (const invalid_argument & err)
	{
		cout << "doSomething says there is a problem!" << endl;
		throw;  //rethrow
	}
	catch (const out_of_range & err)
	{
		cout << "doSomething says the number is too big!" << endl;
		throw; //rethrow 
	}
}