#pragma once
using namespace System;

public ref class Website                            // клас для збереження даних для входу на вебсайт
{
private:                                            // поля класу
	String^ Login;
	String^ Password;

public:
	Website();                                      // конструктор за замовчуванням
	Website(String^ _Login, String^ _Password);     // конструктор з параметрами
};

