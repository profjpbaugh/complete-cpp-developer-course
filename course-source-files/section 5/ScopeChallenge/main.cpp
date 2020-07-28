#include <iostream>
using namespace std;

int counter = 0;
void modifyGlobal();

int main()
{
	cout << counter << endl;

	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
	}

	cout << counter << endl;

	return 0;
}

void modifyGlobal()
{
	counter++;
}