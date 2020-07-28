#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> names;

	names.push_back("Jackson");
	names.push_back("Hoppy");
	names.push_back("Orange");
	names.push_back("Rozie");
	names.push_back("Phillip");

	names.insert(names.begin() + 2, "John Baugh");
	names.pop_back();

	for (string name : names)
	{
		cout << name << endl;
	}
	return 0;
}