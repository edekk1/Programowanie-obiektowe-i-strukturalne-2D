#include <iostream>
#include "BankAccount.h"

int main()
{
	setlocale(LC_CTYPE, "polish");
	BankAccount firstAccount(10000, "Jan Kowalski", "z³");//konstruktor z parametrami
	//firstAccount.SetBalance(10000);
	//firstAccount.balance = 10000;
	//firstAccount.owner = "Jan Kowalski";
	//firstAccount.currency = "z³";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	firstAccount.DepositToAccount(500);
	//depositToAccount(firstAccount, 500);

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	//secondAccount.SetBalance(15000);
	//secondAccount.balance = 15000;
	//secondAccount.owner = "Ewa Kowalska";
	//secondAccount.currency = "z³";

	secondAccount.AccountInformation();

	secondAccount.WidthDrawFromAccount(500);

	secondAccount.AccountInformation();

	secondAccount.TransferBetweenAccounts(firstAccount, 1000);

	firstAccount.AccountInformation();

	secondAccount.AccountInformation();
}

/*
Konstruktor - to metoda z regu³y publicza jest wywo³ywana tylko raz podczas
tworzenia obiektu automatycznie, potem siê nie da jej wywo³aæ, bez typu zwracanego bez nawet void, jej
nazwa jest taka sama jak obiektu

Nazwê metody pisze siê z du¿ej litery jak i równie¿ klasy.
Aby stworzyæ klasê piszemy:

class NazwaKlasy
{

	//kod

};

Aby daæ znaæ, ¿e metoda jest metod¹ a nie funkcj¹ piszemy w
oddzielnym pliku gdzie znajduje siê cia³o metody dla przyk³adu tak (metoda zawarta w klasie):

void NazwaKlasy::NazwaMetody
{

//kod

}

Nie ma ju¿ potrzeby odwo³ywaæ siê do konkretnego pola w typie podczas wywo³ywania metody, poniewa¿ jest ona wywo³ywana w
kontekœcie odpowiedniego obiektu.Przyk³ad:

void BankAccount::AccountInformation()
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n\n";
}

Nale¿y upubliczniæ klasê, poniewa¿ jej elementy s¹ domyœlnie ukryte.
W pliku hederowym piszemy klasê w której znajduj¹ siê nag³ówki metod,
jeœli stworzyliœmy w³asny typ to nale¿y zapisaæ tam jego cechy. Taki przyk³ad:

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;

	void AccountInformation();
}

Operatorem odniesienia/dostêpu jest ".". Przyk³adowe wywo³anie metody:

int main()
{
	firstAccount.AccountInformation();
}


Nazwê struktury piszemy z ma³ej litery jak i nazwê funkcji. Aby utworzyæ strukturê piszemy:

struct nazwaStruktury
{
//kod
};
*/
