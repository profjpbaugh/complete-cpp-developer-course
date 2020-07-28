#include <iostream>
#include <stdexcept>
#include "Person.h"

int main()
{

	try
	{
		Person person1("Bob");
		Person person2("Sally");
		Person person3("John");
		Person person4("William");

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;
	}
	catch (const runtime_error & err)
	{
		cout << err.what() << endl;
	}


	return 0;
}