#include <iostream>
#include "BankAccount.h"

void BankAccount::AccountInformation()
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n\n";
}

void BankAccount::DepositToAccount(double amount)
{
	amount = abs(amount);
	balance = balance + amount;
}

bool BankAccount::WidthDrawFromAccount(double amount)
{
	amount = abs(amount);
	if (balance - amount >= 0)
	{

		balance = balance - amount;
		return true;
	}
	return false;
}

void BankAccount::TransferBetweenAccounts(BankAccount& targetAccount, double amount)
{
	if (WidthDrawFromAccount(amount) == true)
		targetAccount.DepositToAccount(amount);
}