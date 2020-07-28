#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream nameFile;
	ifstream ageFile;
	ofstream outFile;

	string tempName;
	int tempAge;

	cout << "opening files..." << endl;

	nameFile.open("names.txt");
	ageFile.open("ages.txt");
	outFile.open("output.txt");

	if (!nameFile || !ageFile)
	{
		cout << "Problem opening one of the files... bailing out" << endl;
		return 1;
	}

	while (!nameFile.eof() && !ageFile.eof())
	{
		getline(nameFile, tempName);
		ageFile >> tempAge;
		outFile << tempName << " " << tempAge << endl;
	}

	nameFile.close();
	ageFile.close();
	outFile.close();

	cout << "Done!" << endl;

	return 0;
}