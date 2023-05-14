#pragma once						// загальний файл для підключення викорастинах бібліотек
#include "BankCard.h";
#include "Website.h";
#include "User.h";

#include <fstream>
#include <Windows.h>
#include "cryptopp/sm3.h"
#include "cryptopp/hex.h"
#include <msclr/marshal_cppstd.h>   // Для конвертування строк System::String^ в std::string
#include <iostream>
using namespace std;

System::String^ GeneratePassword();												// функція для генерації пароля		
string ConvertStr(System::String^ str);											// функція ковертації String^ в string
System::String^ ConvertToCliStr(std::string str);								// функція ковертації string в String^
string Sm3(const string& input);												// функція хешування алгоритмом SM3
System::String^ CheckPassword(System::String^ toCheck, System::Windows::Forms::Label^ label);	// перевірка паролю на складність