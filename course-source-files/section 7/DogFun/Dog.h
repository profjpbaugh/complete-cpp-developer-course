#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog
{
	public:
		Dog(string breed);
		string getBreed() const;

	private:
		string breed;
};
#endif
