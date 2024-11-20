#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance; // stan konta
	std::string owner; //w�a�ciciel
	std::string currency; // waluta

	void AccountInformation();
	
	void DepositToAccount(double amount);
	
	bool WidthDrawFromAccount(double amount);
	
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
