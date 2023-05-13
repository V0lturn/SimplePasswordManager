#include "Website.h"

Website::Website() {									// реалізація конструктора без параметрів
	Login = "";
	Password = "";
}

Website::Website(String^ _Login, String^ _Password){	// реалізація конструктора з параметрами
	Login = _Login;
	Password = _Password;
}