#include "User.h"
using namespace System::Windows::Forms;

User::User()																					// реалізація конструктора без параметрів
{
	Login = "";
	Password = "";
	UserWebsites = gcnew List<Website^>();
	UsersBankCards = gcnew List<BankCard^>();
}

User::User(System::String^ _Login, System::String^ _Password)									// реалізація конструктора з параметрами
{
	Login = _Login;
	Password = _Password;
	UserWebsites = gcnew List<Website^>();
	UsersBankCards = gcnew List<BankCard^>();
}

System::String^ User::GetLogin()																// отримуємо значення логіну
{
	return Login;
}

System::String^ User::GetPassword()																// отримуємо значення для паролю
{
	return Password;
}

void User::SaveUserInFile()																		// реалізація методу запису даних користувача у файл
{
	try {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();								// Створюємо нове діалогове вікно для збереження файлу
		//SaveFileDialog^ saveFileDialog1 = nullptr;											// Виклик виключення
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";				// Встановлюємо фільтр для вибору типу файлів, які можна зберегти
		saveFileDialog1->Title = "Save user";													// Встановлюємо заголовок діалогового вікна

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {				// Якщо користувач натиснув кнопку "OK" у діалоговому вікні
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);	// Створюємо об'єкт StreamWriter для запису у файл

			sw->WriteLine("User was autorized successfully");											// Виконано хешування всіх даних. Для функції хешування бібліотеки SM3 Cryptopp
			sw->WriteLine("\tUser login: " + ConvertToCliStr(Sm3(ConvertStr(GetLogin()))));				// потрібно дані у форматі string,тому спочатку дані користувача конвертуємо в стрінг та виконуємо хешування. 
			sw->WriteLine("\tUser Password: " + ConvertToCliStr(Sm3(ConvertStr(GetPassword()))));		// Для використання WriteLine потрібно конвертувати отримані значення в String^

			sw->WriteLine("\nUser website data");
			int counter = 1;
			for each (Website ^ website in UserWebsites) {												// тут той же самий алгоритм хешування
				sw->WriteLine("#" + counter + " " + website->GetLink());								
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(website->GetLogin()))));
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(website->GetPassword()))));

				counter++;
			}

			sw->WriteLine("\nUser bank data");
			counter = 1;
			for each (BankCard ^ bankcard in UsersBankCards) {											// тут той же самий алгоритм хешування
				sw->WriteLine("#" + counter + " " + ConvertToCliStr(Sm3(ConvertStr(bankcard->GetCardNumber()))));
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(bankcard->GetExpirationDate()))));
				sw->WriteLine("\t" + ConvertToCliStr(Sm3(ConvertStr(bankcard->GetCVV()))));

				counter++;
			}
			sw->Close();																				// Закриваємо об'єкт StreamWriter											
			
		}
	}
	catch (System::NullReferenceException^ e) {					// якщо параметр FileName у объекта saveFileDialog1 має значення nullptr.
		MessageBox::Show("Сталась помилка при відкритті файлу", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
