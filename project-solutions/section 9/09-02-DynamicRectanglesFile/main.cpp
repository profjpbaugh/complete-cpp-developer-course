#include <iostream>
#include <fstream>
#include <vector>
#include "Rectangle.h"
using namespace std;

void populateVector(ifstream& infile, vector<Rectangle*>& rectVector);
void printData(ofstream& outfile, vector<Rectangle*>& rectVector);
void deallocateRectangles(vector<Rectangle*>& rectVector);

int main()
{
	vector<Rectangle*> rectVector;
	ifstream infile;
	ofstream outfile;

	infile.open("rectangles.txt");
	outfile.open("output.txt");

	if (!infile)
	{
		cout << "Error opening file. Bailing out..." << endl;
		return 1;
	}

	populateVector(infile, rectVector);

	
	printData(outfile, rectVector);
	deallocateRectangles(rectVector);


	infile.close();
	outfile.close();
	return 0;
}

void populateVector(ifstream& infile, vector<Rectangle*>& rectVector)
{
	Rectangle* temp;
	int length;
	int width;

	while (!infile.eof())
	{
		infile >> length;
		infile >> width;

		temp = new Rectangle(length, width);
		rectVector.push_back(temp);
	}
}

void printData(ofstream& outfile, vector<Rectangle*>& rectVector)
{
	for (Rectangle* rectPtr : rectVector)
	{
		outfile << rectPtr->area() << "\t" << rectPtr->perimeter() << endl;
	}
}

void deallocateRectangles(vector<Rectangle*>& rectVector)
{
	for (Rectangle* rectPtr : rectVector)
	{
		delete rectPtr;
	}

	//empty vector
	rectVector.clear();
}