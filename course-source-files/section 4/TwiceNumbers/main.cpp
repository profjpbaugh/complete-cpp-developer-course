#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 10> myNums;

	for (int i = 0; i < myNums.size(); i++)
	{
		myNums[i] = i * 2;
	}//end for 

	for (int element : myNums)
	{
		cout << element << endl;
	}

	return 0;
}