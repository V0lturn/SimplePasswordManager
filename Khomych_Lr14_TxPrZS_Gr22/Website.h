#pragma once

public ref class Website                            // клас для збереження даних для входу на вебсайт
{
private:                                            // поля класу
	System::String^ Link;
	System::String^ Login;
	System::String^ Password;

public:
	Website();                                      // конструктор за замовчуванням
	Website(System::String^ _Link, System::String^ _Login, System::String^ _Password);     // конструктор з параметрами

	System::String^ GetLink();						// аксесор для отримання посилання
	System::String^ GetLogin();						// аксесор для отримання логіну
	System::String^ GetPassword();					// аксесор для отримання пароля
};

