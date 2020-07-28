#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int someArray[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		someArray[i] = i + 1;
	}

	for (int number : someArray)
	{
		cout << number << endl;
	}

	return 0;
}