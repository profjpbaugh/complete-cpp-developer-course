#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " is even." << endl;
		}
		else
		{
			cout << i << " is odd." << endl;
		}
	}//end for loop

	return 0;
}