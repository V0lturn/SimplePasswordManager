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

System::String^ Website::GetLogin()
{
	return Login;
}