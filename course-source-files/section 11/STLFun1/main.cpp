#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> deck);

int main()
{
	deque<int> myDeck;

	myDeck.push_back(1);
	myDeck.push_back(5);
	myDeck.push_back(10);

	cout << "First print" << endl;
	printDeque(myDeck);

	myDeck.push_front(20);
	myDeck.push_front(30);
	cout << "Next print" << endl;
	printDeque(myDeck);

	return 0;
}

void printDeque(deque<int> deck)
{
	for (int num : deck)
	{
		cout << num << endl;
	}
	cout << endl;
}