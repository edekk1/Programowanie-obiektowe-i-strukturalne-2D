#include <iostream>

struct bankAccount
{
	double balance; // stan konta
	std::string owner; //w³aœciciel
	std::string currency; // waluta
};

void accountInformation(bankAccount &account)
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n\n";
}

void depositToAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

bool widthDrawFromAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(bankAccount &sourceAccount, bankAccount &targetAccount, double amount)
{
	if (widthDrawFromAccount(sourceAccount, amount) == true)
		depositToAccount(targetAccount, amount);
}

void task3()
{
	bankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	accountInformation(firstAccount);

	depositToAccount(firstAccount, 500);

	accountInformation(firstAccount);


	bankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.owner = "Ewa Kowalska";
	secondAccount.currency = "z³";

	accountInformation(secondAccount);

	widthDrawFromAccount(secondAccount, 500);

	accountInformation(secondAccount);

	transferBetweenAccounts(secondAccount, firstAccount, 1000);

	accountInformation(firstAccount);
	accountInformation(secondAccount);
}