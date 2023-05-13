#include "BankCard.h"

BankCard::BankCard()																// реалізація конструктора без параметрів
{
	CardNumber = "";
	ExpirationDate = "";
	CVV = "";
}

BankCard::BankCard(String^ _CardNumber, String^ _ExpirationDate, String^ _CVV)		// реалізація конструктора з параметрами
{
	CardNumber = _CardNumber;
	ExpirationDate = _ExpirationDate;
	CVV = _CVV;
}