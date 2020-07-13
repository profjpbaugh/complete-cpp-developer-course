#include "BankAccount.h"
#include <iostream>
using namespace std;


BankAccount::BankAccount(string owner)
{
	this->owner = owner;
	this->balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	this->owner = owner;
	if (balance <= 0)
	{
		cout << "You must enter a balance > 0" << endl;
	}
	else
	{
		this->balance = balance;
	}
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;  //balance = balance + amount;
	}
	else
	{
		cout << "The amount to deposit must be greater than 0" << endl;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > 0 && amount <= balance)
	{
		balance -= amount;  //balance = balance - amount
	}
	else
	{
		cout << "The amount to withdraw must be greater than 0 "
			<< "and less than your balance." << endl;
	}
}

string BankAccount::getOwner() const
{
	return owner;
}

int BankAccount::getBalance() const
{
	return balance;
}