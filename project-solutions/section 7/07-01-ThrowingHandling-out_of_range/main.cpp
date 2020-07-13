#include <iostream>
#include <stdexcept>
using namespace std;

char getLetterGrade(int percent);

int main()
{
	char letter;

	try
	{
		letter = getLetterGrade(99);
		cout << letter << endl;

		letter = getLetterGrade(50);
		cout << letter << endl;

		letter = getLetterGrade(-5);
		cout << letter << endl;
	}
	catch (const out_of_range & err)
	{
		cout << err.what() << endl;
	}

	return 0;
}

char getLetterGrade(int percent)
{
	char grade;
	if (percent < 0 || percent > 100)
	{
		throw out_of_range("Your percent must be within 0 and 100, inclusive.");
	}
	else if (percent >= 90)
	{
		grade = 'A';
	}
	else if (percent >= 80)
	{
		grade = 'B';
	}
	else if (percent >= 70)
	{
		grade = 'C';
	}
	else if (percent >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	return grade;
}