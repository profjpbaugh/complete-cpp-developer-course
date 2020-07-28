#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	ifstream infile;
	infile.open("input.txt");

	int inputNum;
	int sum = 0;

	vector<int> myInts;

	while (!infile.eof())
	{
		infile >> inputNum;
		myInts.push_back(inputNum);
		sum += inputNum;
	}
	

	for (int item : myInts)
	{
		cout << item << endl;
	}

	cout << endl;
	cout << "Sum of numbers is: " << sum << endl;

	infile.close();

	return 0;
}