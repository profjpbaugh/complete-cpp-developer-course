#include <iostream>
#include <string>
#include <fstream>
#include "ItemFrequencies.h"
using namespace std;

int main()
{
	ItemFrequencies itemFrequencies;
	ifstream infile;
	string tempName;

	infile.open("shopping.txt");

	if (!infile)
	{
		cout << "Error opening file... bailing out..." << endl;
		return 1;
	}

	while (!infile.eof())
	{
		infile >> tempName;
		itemFrequencies.addItem(tempName);
	}

	itemFrequencies.printFrequencies();

	infile.close();

	return 0;
}