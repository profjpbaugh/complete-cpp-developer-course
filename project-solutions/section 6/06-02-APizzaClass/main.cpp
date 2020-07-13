#include <iostream>
#include "Pizza.h"
using namespace std;

void printPizzaData(const Pizza& pizza);

int main()
{
	Pizza johnsPizza("Cheese pizza", 5, 8);
	Pizza mattsPizza("Pepperoni pizza", 7, 8);
	mattsPizza.addTopping("pepperoni");

	Pizza special("The Special Pizza", 12, 10);

	special.addTopping("pepperoni");
	special.addTopping("black olives");
	special.addTopping("onion");
	special.addTopping("mushroom");

	printPizzaData(johnsPizza);
	printPizzaData(mattsPizza);
	printPizzaData(special);

	return 0;
}

void printPizzaData(const Pizza& pizza)
{
	cout << "Name: " << pizza.getName() << endl;
	cout << "Diameter: " << pizza.getDiameter() << endl;
	cout << "Cost: $" << pizza.getCost() << endl;
	cout << "Toppings:" << endl;

	pizza.printToppings();
	cout << endl;
}