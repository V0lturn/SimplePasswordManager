#include "BankCard.h"

BankCard::BankCard()																						// реалізація конструктора без параметрів
{
	CardNumber = "";
	ExpirationDate = "";
	CVV = "";
}

BankCard::BankCard(System::String^ _CardNumber, System::String^ _ExpirationDate, System::String^ _CVV)		// реалізація конструктора з параметрами
{
	CardNumber = _CardNumber;
	ExpirationDate = _ExpirationDate;
	CVV = _CVV;
}