#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h";
using namespace std;

int main()
{
	//Animal myAnimal("Sam", 100);
	Dog dog("Rover", 80, "Greyhound");
	Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever");
	Animal* catPtr = new Cat("Felix", 12);


	cout << "Make noise?  " << dogPtr->makeNoise() << endl;
	cout << "Eating?  " << dogPtr->eat() << endl;

	cout << "Cat noise? " << catPtr->makeNoise() << endl;
	cout << "Cat eating?" << catPtr->eat() << endl;

	//((Cat*)catPtr)->chaseMouse();
	(reinterpret_cast<Cat*>(catPtr))->chaseMouse();

	//cout << "Animal name: " << myAnimal.getName() << endl;
	//cout << "Animal weight: " << myAnimal.getWeight() << endl;
	//cout << "Animal noise: " << myAnimal.makeNoise() << endl;

	//cout << "Dog's name: " << dog.getName() << endl;
	//cout << "Dog's weight: " << dog.getWeight() << endl;
	//cout << "Dog's noise: " << dog.makeNoise() << endl;
	//dog.digHole();
	//dog.chaseCat();

	delete dogPtr;
	dogPtr = nullptr;

	delete catPtr;
	catPtr = nullptr;

	return 0;
}