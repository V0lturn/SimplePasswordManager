#pragma once
#include "General.h"

namespace KhomychLr14TxPrZSGr22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;


	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	private:
		User^ CurrentUser;
	public:
		MyForm4(User^ u)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			this->CurrentUser = u;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(29, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(647, 55);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Термін дії карт";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(111, 92);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series3->ChartArea = L"ChartArea1";
			series3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(482, 330);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button1->Location = System::Drawing::Point(214, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 60);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Вийти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(711, 531);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Термін карт";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		//	Dictionary<int, int>^ cardCountByYear = gcnew Dictionary<int, int>();	// словник буде використовуватись для збереження інформації про кількість карток за кожен рік, 
		//	// де ключ - рік, а значення - кількість карток, які закінчуються у цьому році.
		//	for each (BankCard ^ bankcard in CurrentUser->UsersBankCards)			// Проходимо через кожну картку користувача в листі UsersBankCards поточного користувача
		//	{						  // Отримуємо дату закінчення терміну дії карти з об'єкту bankcard та перетворюємо її в об'єкт DateTime з використанням ParseExact()
		//		DateTime cardDate = DateTime::ParseExact(bankcard->GetExpirationDate(), "yy/MM", System::Globalization::CultureInfo::InvariantCulture);
		//		int year = cardDate.Year;											// Отримуємо рік з дати карти
		//		if (cardCountByYear->ContainsKey(year))								// Перевіряємо, чи вже містить словник cardCountByYear ключ з поточним роком
		//		{
		//			cardCountByYear[year]++;
		//		}
		//		else																// Якщо ключ не існує, додаємо його в словник зі значенням 1 для цього року
		//		{
		//			cardCountByYear->Add(year, 1);
		//		}
		//	}

		//	chart1->Series->Clear();												// створємо об'єкт діаграми
		//	chart1->Series->Add("Термін дії карти");
		//	chart1->ChartAreas[0]->AxisX->Title = "Рік";
		//	chart1->ChartAreas[0]->AxisY->Title = "Кількість";
		//	chart1->Series[0]->ChartType = DataVisualization::Charting::SeriesChartType::Column;
		//	chart1->ChartAreas[0]->AxisY->Interval = 1;

		//	for each (KeyValuePair<int, int> kvp in cardCountByYear)					// додаємо дані в діаграму
		//	{																			// ітеруємось по кожній парі ключ-значення в словнику cardCountByYear
		//		DataPoint^ point = gcnew DataPoint();									// створюємо об'єкт DataPoint для додавання до діаграми
		//		point->AxisLabel = kvp.Key.ToString();									// встановлюємо значення мітки по осі X
		//		point->YValues[0] = kvp.Value;											// встановлюємо значення по осі Y	
		//		chart1->Series[0]->Points->Add(point);									// додаємо точку до серії діаграми
		//	}
		//}

	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		Dictionary<int, int>^ cardCountByYear = gcnew Dictionary<int, int>();			// словник буде використовуватись для збереження інформації про кількість карток за кожен рік,
		// де ключ - рік, а значення - кількість карток, які закінчуються у цьому році.
		for each (BankCard ^ bankcard in CurrentUser->UsersBankCards)					// Проходимо через кожну картку користувача в листі UsersBankCards поточного користувача
		{
			// Отримуємо дату закінчення терміну дії карти з об'єкту bankcard та перетворюємо її в об'єкт DateTime з використанням ParseExact()
			DateTime cardDate = DateTime::ParseExact(bankcard->GetExpirationDate(), "yy/MM", System::Globalization::CultureInfo::InvariantCulture);
			int year = cardDate.Year;													// Отримуємо рік з дати карти
			if (cardCountByYear->ContainsKey(year))										// Перевіряємо, чи вже містить словник cardCountByYear ключ з поточним роком
			{
				cardCountByYear[year]++;
			}
			else                                                                        // Якщо ключ не існує, додаємо його в словник зі значенням 1 для цього року
			{
				cardCountByYear->Add(year, 1);
			}
		}

		List<int>^ years = gcnew List<int>();											// Отримуєм список років
		for each (int year in cardCountByYear->Keys)
		{
			years->Add(year);
		}

		years->Sort();																	// Сортируємо список років 

		chart1->Series->Clear();														// створємо об'єкт діаграми
		chart1->Series->Add("Термін дії карти");
		chart1->ChartAreas[0]->AxisX->Title = "Рік";
		chart1->ChartAreas[0]->AxisY->Title = "Кількість";
		chart1->Series[0]->ChartType = DataVisualization::Charting::SeriesChartType::Column;
		chart1->ChartAreas[0]->AxisY->Interval = 1;

		for each (int year in years)													// виводимо діаграму
		{
			int count = cardCountByYear[year];
			DataPoint^ point = gcnew DataPoint();
			point->AxisLabel = year.ToString();
			point->YValues[0] = count;
			chart1->Series[0]->Points->Add(point);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {	// вихід
		Close();
	}

	};
}
