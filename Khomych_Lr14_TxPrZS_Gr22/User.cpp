#include "User.h"

User::User()													// реалізація конструктора без параметрів
{
	Login = "";
	Password = "";
	UserWebsites = gcnew List<Website^>();
	BankCards = gcnew List<BankCard^>();
}

User::User(System::String^ _Login, System::String^ _Password)	// реалізація конструктора з параметрами
{
	Login = _Login;
	Password = _Password;
	UserWebsites = gcnew List<Website^>();
	BankCards = gcnew List<BankCard^>();
}

System::String^ User::GetLogin()								// отримуємо значення логіну
{
	return Login;
}

System::String^ User::GetPassword()								// отримуємо значення для паролю
{
	return Password;
}