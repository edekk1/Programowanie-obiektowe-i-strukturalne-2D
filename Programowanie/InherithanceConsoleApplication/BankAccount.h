#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance; // stan konta
	std::string owner; //w³aœciciel
	std::string currency; // waluta

	void AccountInformation();
	
	void DepositToAccount(double amount);
	
	bool WidthDrawFromAccount(double amount);
	
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
