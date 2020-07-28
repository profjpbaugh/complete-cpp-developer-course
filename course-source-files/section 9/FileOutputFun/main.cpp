#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void printFormatted(ofstream& outfile, int highNum);

int main()
{
	ofstream outfile;
	int highNum;

	cout << "Enter the high number" << endl;
	cin >> highNum;

	cout << "Writing to file" << endl;

	outfile.open("output.txt");

	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	printFormatted(outfile, highNum);

	outfile.close();

	cout << "Done!" << endl;

	return 0;
}

void printFormatted(ofstream& outfile, int highNum)
{
	for (int i = 1; i <= highNum; i++)
	{
		outfile << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;

		cout << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}
}