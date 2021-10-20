
#pragma once
#include <iostream>  
class Account
{
private:

	double balance;



public:
	Account() { balance = 1000; }
	Account(double init_bal) {
		//check init_bal if >= $1000.00

		//if >= $1000.00, set balance to init_bal

		//else set balance to zero, and print invalid amt error message.



	}

	void setBalance();
	double getBalance();

	double deposit(double amount);
	bool withdrawal(double amount);





};

