#include <iostream>
using namespace std;

void countDownFrom(int num);
int sumValues(int num);

int main()
{
	countDownFrom(10);

	int totalSum = sumValues(10);

	cout << "The sum is " << totalSum << endl;

	return 0;
}

void countDownFrom(int num)
{
	if (num >= 0)
	{
		cout << num << endl;
		countDownFrom(num - 1);
	}
}

int sumValues(int num)
{
	if (num >= 1)
	{
		return num + sumValues(num - 1);
	}

	return num;
}