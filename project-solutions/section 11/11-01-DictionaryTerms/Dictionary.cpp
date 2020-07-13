#include <iostream>
#include "Dictionary.h"
using namespace std;

void Dictionary::addDefinition(string word, string definition)
{
	auto it = dictionary.find(word);

	if (it != dictionary.end())
	{
		//already in the dictionary
		it->second = definition;
	}
	else
	{
		//new word
		dictionary[word] = definition;
	}
}

string Dictionary::getDefinition(string word) const
{
	auto it = dictionary.find(word);

	string result = "";

	if (it != dictionary.end())
	{
		result = it->second;
	}
	else
	{
		result = "NOT FOUND!";
	}

	return result;
}

void Dictionary::printAll() const
{
	for (auto pair : dictionary)
	{
		cout << pair.first << ":\t" << pair.second << endl;
	}
	cout << endl;
}