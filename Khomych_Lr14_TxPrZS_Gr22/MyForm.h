#pragma once

namespace KhomychLr14TxPrZSGr22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;





	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->Location = System::Drawing::Point(66, 32);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(486, 604);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(4, 37);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabPage1->Size = System::Drawing::Size(478, 563);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Авторизація";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button2->Location = System::Drawing::Point(63, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(359, 68);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Авторизуватись";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox6->Location = System::Drawing::Point(142, 368);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(199, 32);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"Текст капчі";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button1->Location = System::Drawing::Point(264, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 60);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Створити\r\nнову";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::LightGray;
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(104, 279);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 60);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(3, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(472, 91);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Менеджер паролів";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox5->Location = System::Drawing::Point(142, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 32);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"Пароль";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox4->Location = System::Drawing::Point(142, 141);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 32);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Логін";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(478, 563);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Реєстрація";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button4->Location = System::Drawing::Point(63, 453);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(359, 68);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Зареєструватись";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(142, 368);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 32);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Текст капчі";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button3->Location = System::Drawing::Point(264, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 60);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Створити\r\nнову";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::LightGray;
			this->label3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label3->Location = System::Drawing::Point(104, 279);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 60);
			this->label3->TabIndex = 10;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(3, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(472, 91);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Менеджер паролів";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox2->Location = System::Drawing::Point(142, 203);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 32);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"Пароль";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox3->Location = System::Drawing::Point(142, 141);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 32);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Логін";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(615, 698);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Khomych Lab14";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
