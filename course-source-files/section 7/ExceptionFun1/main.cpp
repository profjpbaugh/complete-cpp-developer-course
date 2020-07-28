#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;

int main()
{
	vector<string> names(5);

	names.at(0) = "John";
	names.at(1) = "Bob";
	names.at(2) = "Sally";
	names.at(3) = "Karen";
	names.at(4) = "Smitty";

	for (string name : names)
	{
		cout << name << endl;
	}

	try
	{
		//exception?
		names.at(5) = "Tyler";
	}
	catch (const out_of_range& err)
	{
		cout << err.what() << endl;
	}



	return 0;
}