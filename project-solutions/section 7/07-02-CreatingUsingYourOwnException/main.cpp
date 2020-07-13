#include <iostream>
#include <stdexcept>
#include "WarpDriveOverheating.h"
using namespace std;

void warpTest(int temp);

int main()
{

	cout << "Testing" << endl;

	try
	{
		for (int i = 0; i < 10; i++)
		{
			warpTest(50 + (i * 10));
		}
	}
	catch (const WarpDriveOverheating & err)
	{
		cout << err.what() << endl;
	}

	return 0;
}

void warpTest(int temp)
{
	if (temp <= 80)
	{
		cout << "Temperature is within tolerance." << endl;
	}
	else
	{
		throw WarpDriveOverheating();
	}
}