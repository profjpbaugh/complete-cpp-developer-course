#include <iostream> 
using namespace std;

int main()
{
	//int count = 10;

	//while (count < 10) {
	//	
	//	cout << count << endl;
	//	count++;
	//}

	//cout << endl << endl;

	////do-while
	//int count2 = 10;
	//do
	//{
	//	cout << count2 << endl;
	//	count2++;
	//} while (count2 < 10);

	//for loop
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	//priming read
	int input;
	cout << "Please enter a non-negative integer to continue, ";
	cout << "or negative if you want to quit" << endl;

	cin >> input;
	while (input >= 0)
	{
		cout << input << endl;
		cout << "Please enter a non-negative integer to continue, ";
		cout << "or negative if you want to quit" << endl;

		cin >> input;
	}//end while

	return 0;
}