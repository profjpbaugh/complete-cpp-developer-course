#ifndef CAT_H
#define CAT_H

#include <string>
#include "Animal.h"
using namespace std;

class Cat : public Animal
{
	public:
		Cat(string name, double weight);
		void chaseMouse() const;
		string makeNoise() const;
		string eat() const;

};

#endif 
