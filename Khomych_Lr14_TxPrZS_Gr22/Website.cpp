#include "Website.h"

Website::Website() {									// реалізація конструктора без параметрів
	Link = "";
	Login = "";
	Password = "";
}

Website::Website(System::String^ _Link,System::String^ _Login, System::String^ _Password){	// реалізація конструктора з параметрами
	Link = _Link;
	Login = _Login;
	Password = _Password;
}

System::String^ Website::GetLink()						// реалізація аксесора для отримання посилання
{
	return Link;
}

System::String^ Website::GetLogin()						// реалізація аксесора для отримання логіну
{
	return Login;
}

System::String^ Website::GetPassword()					// реалізація аксесора для отримання паролю
{
	return Password;
}