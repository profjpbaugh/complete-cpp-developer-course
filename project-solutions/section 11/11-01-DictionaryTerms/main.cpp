#include <iostream>
#include <string>
#include "Dictionary.h"
using namespace std;

void printMenu();
void uiAddWord(Dictionary& dictionary);
void uiGetDefinition(const Dictionary& dictionary);

int main()
{
	Dictionary theDictionary;
	int userChoice;

	printMenu();
	cin >> userChoice;
	cin.get();  //consume the newline character!

	while (userChoice != 0)
	{
		if (userChoice == 1)
		{
			uiAddWord(theDictionary);
		}
		else if (userChoice == 2)
		{
			uiGetDefinition(theDictionary);
		}
		else if (userChoice == 3)
		{
			cout << "Printing all definitions:" << endl;
			theDictionary.printAll();
			cout << endl;
		}

		cout << endl;
		printMenu();
		cin >> userChoice;
		cin.get();  //consume the newline character!

	}//end while 

	cout << "Program done!" << endl;

	return 0;
}

void printMenu()
{
	cout << endl;
	cout << "Type your selection" << endl;
	cout << "1 - Add a new word and definition" << endl;
	cout << "2 - Get the definition for a word" << endl;
	cout << "3 - Print all definitions" << endl;
	cout << "0 - Exit the program." << endl;
	cout << endl;
}

void uiAddWord(Dictionary& dictionary)
{
	string word;
	string definition;

	cout << "Enter the word" << endl;
	getline(cin, word);

	cout << "Enter the definition for " << word << endl;
	getline(cin, definition);

	dictionary.addDefinition(word, definition);
}

void uiGetDefinition(const Dictionary& dictionary)
{
	string theWord;

	cout << "For which word do you want the definition?" << endl;
	getline(cin, theWord);

	cout << dictionary.getDefinition(theWord) << endl;
	cout << endl;
}