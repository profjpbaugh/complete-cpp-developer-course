#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;
	vector<string> names;
	vector<int> weights;
	string tempName;
	int tempWeight;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Please enter a person's full name" << endl;
		getline(cin, tempName);

		cout << "Please enter " << tempName << "'s weight." << endl;
		cin >> tempWeight;
		cin.get();  //consume newline character

		names.push_back(tempName);
		weights.push_back(tempWeight);
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << names[i] << " weighs " << weights[i] << " lbs" << endl;
	}


	return 0;
}