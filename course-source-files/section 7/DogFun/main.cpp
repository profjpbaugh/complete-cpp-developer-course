#include <iostream>
#include <stdexcept>
#include "Dog.h"

int main()
{
	try
	{
		Dog myDog("German Shepherd");
		Dog yourDog("Golden Retriever");
		Dog theirDog("Poodle");

		cout << myDog.getBreed() << endl;
		cout << yourDog.getBreed() << endl;
		cout << theirDog.getBreed() << endl;
	}
	catch (const runtime_error & err)
	{
		cout << err.what();
	}

	return 0;
}