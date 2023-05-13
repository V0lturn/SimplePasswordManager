#pragma once
using namespace System;

ref class BankCard															// клас для зберігання банківських карт
{																			
private:																	// поля класу
	String^ CardNumber;
	String^ ExpirationDate;
	String^ CVV;

public:																		// методи класу
	BankCard();																// конструктор за замовчуванням
	BankCard(String^ _CardNumber, String^ _ExpirationDate, String^ _CVV);	// конструктор з параметрами

	
};

