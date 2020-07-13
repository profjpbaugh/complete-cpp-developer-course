#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
	BankAccount myAccount("John Baugh", 5000);
	BankAccount bobsAccount("Bob Robinson");

	bobsAccount.deposit(500);
	cout << "Bob's account contains " << bobsAccount.getBalance() << endl;

	bobsAccount.withdraw(1000);  //should cause warning

	cout << "Bob's account is still " << bobsAccount.getBalance() << endl;

	cout << myAccount.getOwner() << "'s account contains "
		<< myAccount.getBalance() << endl;

	return 0;
}