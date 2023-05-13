#pragma once
#include "General.h"
using namespace System::Collections::Generic;

ref class User													// клас для зберігання користувачів
{	
private:														// поля класу
	System::String^ Login;
	System::String^ Password;

public:	
	List<Website^>^ UserWebsites;								// лісти для зберігання даних юзера
	List<BankCard^>^ BankCards;

	User();														// конструктор за замовчуванням
	User(System::String^ _Login, System::String^ _Password);	// конструктор з параметрами
	System::String^ GetLogin();									// аксесор для логіну
	System::String^ GetPassword();								// аксесор для паролю
};

