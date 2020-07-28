#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile;
	ofstream outfile;
	int tempNum;


	cout << "opening files..." << endl;
	infile.open("input.txt");
	outfile.open("output.txt");

	if (!infile)
	{
		cout << "Error opening file..." << endl;
		return 1;
	}

	while (!infile.eof())
	{
		infile >> tempNum;

		outfile << (tempNum * 2) << endl;
	}

	infile.close();
	outfile.close();

	cout << "Done" << endl;

	return 0;
}