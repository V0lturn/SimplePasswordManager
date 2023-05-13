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

System::String^ BankCard::GetCardNumber()				// реалізація аксесора для отримання номера карти
{
	return CardNumber;
}

System::String^ BankCard::GetExpirationDate()			// реалізація аксесора для отримання терміну дії карти
{
	return ExpirationDate;
}

System::String^ BankCard::GetCVV()						// реалізація аксесора для отримання CVV карти
{
	return CVV;
}
