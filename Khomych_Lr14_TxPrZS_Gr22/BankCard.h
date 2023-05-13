#pragma once

ref class BankCard															// клас для зберігання банківських карт
{																			
private:																	// поля класу
	System::String^ CardNumber;
	System::String^ ExpirationDate;
	System::String^ CVV;

public:																		// методи класу
	BankCard();																// конструктор за замовчуванням
	BankCard(System::String^ _CardNumber, System::String^ _ExpirationDate, System::String^ _CVV);	// конструктор з параметрами
};

