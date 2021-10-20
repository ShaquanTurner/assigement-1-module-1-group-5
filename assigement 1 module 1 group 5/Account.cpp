
#include "Account.h"

//member functions

void Account::setBalance()
{
}

double Account::getBalance()
{
	return balance; 
}

double Account::deposit(double amount)
{
	return balance += amount;
}

bool Account::withdrawal(double amount)
{
	return balance -= amount;
}

double deposit(double amount)
{
	return 0.0;
}

bool withdrawal(double amount)
{
	return false;
}