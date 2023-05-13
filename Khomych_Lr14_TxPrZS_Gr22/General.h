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

