#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <map>
using namespace std;

class Dictionary
{
	public:
		void addDefinition(string word, string definition);
		string getDefinition(string word) const;
		void printAll() const;

	private:
		map<string, string> dictionary;
};
#endif 
