#pragma once
#include "General.h"
#include "MyForm1.h"
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label11;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
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
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(40, 17);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 101);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button2->Location = System::Drawing::Point(63, 456);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(359, 68);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Авторизуватись";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(73, 369);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 32);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Текст капчі:";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(73, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 32);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Пароль:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(73, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Логін:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox6->Location = System::Drawing::Point(307, 369);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(115, 32);
			this->textBox6->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button1->Location = System::Drawing::Point(294, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 60);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Створити\r\nнову";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::LightGray;
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(105, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 60);
			this->label2->TabIndex = 3;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(93, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(379, 91);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Менеджер паролів";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox5->Location = System::Drawing::Point(223, 206);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 32);
			this->textBox5->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox4->Location = System::Drawing::Point(223, 142);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 32);
			this->textBox4->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(478, 563);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Реєстрація";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(227, 241);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(199, 25);
			this->label11->TabIndex = 24;
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PaleGreen;
			this->button5->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button5->Location = System::Drawing::Point(143, 415);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(168, 47);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Згенерувати\r\nпароль\r\n";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 101);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(73, 352);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 32);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Текст капчі:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(73, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 32);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Пароль:";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label9->Location = System::Drawing::Point(73, 142);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 32);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Логін:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(307, 352);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 32);
			this->textBox1->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button3->Location = System::Drawing::Point(294, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 60);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Створити\r\nнову";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::LightGray;
			this->label10->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label10->Location = System::Drawing::Point(105, 269);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 60);
			this->label10->TabIndex = 16;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox2->Location = System::Drawing::Point(227, 206);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 32);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox3->Location = System::Drawing::Point(223, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 32);
			this->textBox3->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button4->Location = System::Drawing::Point(63, 479);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(359, 68);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Зареєструватись";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(93, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(379, 91);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Менеджер паролів";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void GenerateCaptcha(Label^ label)
	{
		Random^ rnd = gcnew Random();														// створення обьекту для генерації випадкових чисел
		String^ chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";	// можливі символи
		String^ captcha = "";
		for (int i = 0; i < 6; i++)
		{
			captcha += chars[rnd->Next(0, chars->Length)];
		}
		label->Text = captcha;																// виведення капчі
	}

		  User^ User1 = gcnew User("kangaroo", "hT@U4852");			// створення 3 користувачів по замовчуванню
		  User^ User2 = gcnew User("chimpanzee", "fN325@st");
		  User^ User3 = gcnew User("goldfish", "4&D@Ju53");
		  List<User^>^ users = gcnew List<User^>();										// ліст усіх користувачів

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {		// ініціалізація даних стандартних користувачів + створення початкової капчі
#pragma region Initialize users
		Website^ website1 = gcnew Website("https://www.google.com/", "kAngaro0", "aaaaaaa");
		Website^ website2 = gcnew Website("https://www.youtube.com/", "kang@roO", "BBBBBBBB");
		Website^ website3 = gcnew Website("https://www.facebook.com/", "Kangar00", "password3");
		Website^ website4 = gcnew Website("https://www.amazon.com/", "k@nGAr0o", "pasSword");
		Website^ website5 = gcnew Website("https://www.wikipedia.org/", "Kang@roo", "password-");
		Website^ website6 = gcnew Website("https://twitter.com/", "k@NgaRoo", "88888888");
		Website^ website7 = gcnew Website("https://www.instagram.com/", "K@ng@roo", "ccccc");
		Website^ website8 = gcnew Website("https://www.linkedin.com/", "kang@R00", "---------");
		Website^ website9 = gcnew Website("https://www.reddit.com/", "KANGaroo", "ceKN2*wZ");
		Website^ website10 = gcnew Website("https://www.netflix.com/", "k@ng@r00", "bhWGxBz7~{?");

		User1->UserWebsites->Add(website1);
		User1->UserWebsites->Add(website2);
		User1->UserWebsites->Add(website3);
		User1->UserWebsites->Add(website4);
		User1->UserWebsites->Add(website5);
		User1->UserWebsites->Add(website6);
		User1->UserWebsites->Add(website7);
		User1->UserWebsites->Add(website8);
		User1->UserWebsites->Add(website9);
		User1->UserWebsites->Add(website10);

		Website^ website11 = gcnew Website("https://www.amazon.com/", "ch1mpanzee", "PPPPPPPP");
		Website^ website12 = gcnew Website("https://www.facebook.com/", "chimp@nzee", "password6");
		Website^ website13 = gcnew Website("https://www.instagram.com/", "chImp@nzee", "passwOrd");
		Website^ website14 = gcnew Website("https://twitter.com/", "ch1mp@nz3e", "pass$word");
		Website^ website15 = gcnew Website("https://www.linkedin.com/", "chImp@nz33", "11111111");
		Website^ website16 = gcnew Website("https://www.reddit.com/", "ChImp@nze3", "mmmm");
		Website^ website17 = gcnew Website("https://www.twitch.tv/", "cH1mpanz3e", ":::::::::");
		Website^ website18 = gcnew Website("https://www.dropbox.com/", "ch1mPanz33", "2uH*J$W5ME");
		Website^ website19 = gcnew Website("https://slack.com/", "CH1mp@nzEe", "B'wQ3!Z(");
		Website^ website20 = gcnew Website("https://www.airbnb.com/", "chImpanzee", "kkkkkkkk");

		User2->UserWebsites->Add(website11);
		User2->UserWebsites->Add(website12);
		User2->UserWebsites->Add(website13);
		User2->UserWebsites->Add(website14);
		User2->UserWebsites->Add(website15);
		User2->UserWebsites->Add(website16);
		User2->UserWebsites->Add(website17);
		User2->UserWebsites->Add(website18);
		User2->UserWebsites->Add(website19);
		User2->UserWebsites->Add(website20);

		Website^ website21 = gcnew Website("https://www.amazon.com/", "g0ldfish", "xxxxxxxx");
		Website^ website22 = gcnew Website("https://www.facebook.com/", "goldf1sh", "2password");
		Website^ website23 = gcnew Website("https://www.instagram.com/", "g0ldf1sh", "pAssword");
		Website^ website24 = gcnew Website("https://twitter.com/", "Goldfish", "p@ssword");
		Website^ website25 = gcnew Website("https://www.linkedin.com/", "G0ldfish", "44444444");
		Website^ website26 = gcnew Website("https://www.reddit.com/", "Goldf1sh", "rrrr");
		Website^ website27 = gcnew Website("https://www.twitch.tv/", "G0ldf1sh", "++++++++++");
		Website^ website28 = gcnew Website("https://www.dropbox.com/", "GOLDfish", "JJJJJJJJJ");
		Website^ website29 = gcnew Website("https://slack.com/", "goldFISH", "Yr]d('9K");
		Website^ website30 = gcnew Website("https://www.airbnb.com/", "G0lDF1sh", "JJkt.hK6SC");

		User3->UserWebsites->Add(website21);
		User3->UserWebsites->Add(website22);
		User3->UserWebsites->Add(website23);
		User3->UserWebsites->Add(website24);
		User3->UserWebsites->Add(website25);
		User3->UserWebsites->Add(website26);
		User3->UserWebsites->Add(website27);
		User3->UserWebsites->Add(website28);
		User3->UserWebsites->Add(website29);
		User3->UserWebsites->Add(website30);

		BankCard^ bankcard1 = gcnew BankCard("3956-5782-5214-7139", "25/03", "832");
		BankCard^ bankcard2 = gcnew BankCard("5958-5867-1810-5335", "23/12", "841");
		BankCard^ bankcard3 = gcnew BankCard("4252-8572-1049-3286", "24/05", "721");
		BankCard^ bankcard4 = gcnew BankCard("8888-6785-1536-9882", "27/01", "212");
		BankCard^ bankcard5 = gcnew BankCard("3658-3298-4921-0104", "28/03", "532");

		User1->UsersBankCards->Add(bankcard1);
		User1->UsersBankCards->Add(bankcard2);
		User1->UsersBankCards->Add(bankcard3);
		User1->UsersBankCards->Add(bankcard4);
		User1->UsersBankCards->Add(bankcard5);

		BankCard^ bankcard6 = gcnew BankCard("8994-6510-6743-7576", "25/09", "753");
		BankCard^ bankcard7 = gcnew BankCard("1827-1189-8638-1029", "23/10", "279");
		BankCard^ bankcard8 = gcnew BankCard("7108-8824-1018-8410", "28/02", "703");
		BankCard^ bankcard9 = gcnew BankCard("3847-1888-2411-8841", "26/11", "227");
		BankCard^ bankcard10 = gcnew BankCard("4138-9769-1598-9642", "26/08", "133");

		User2->UsersBankCards->Add(bankcard6);
		User2->UsersBankCards->Add(bankcard7);
		User2->UsersBankCards->Add(bankcard8);
		User2->UsersBankCards->Add(bankcard9);
		User2->UsersBankCards->Add(bankcard10);

		BankCard^ bankcard11 = gcnew BankCard("9299-2426-1945-2411", "23/09", "328");
		BankCard^ bankcard12 = gcnew BankCard("8117-8429-1536-2545", "24/08", "456");
		BankCard^ bankcard13 = gcnew BankCard("9884-1019-8981-1047", "28/09", "786");
		BankCard^ bankcard14 = gcnew BankCard("9925-1395-5765-5735", "27/01", "364");
		BankCard^ bankcard15 = gcnew BankCard("2934-2893-2116-1855", "29/05", "460");

		User3->UsersBankCards->Add(bankcard11);
		User3->UsersBankCards->Add(bankcard12);
		User3->UsersBankCards->Add(bankcard13);
		User3->UsersBankCards->Add(bankcard14);
		User3->UsersBankCards->Add(bankcard15);

		GenerateCaptcha(label2);
#pragma endregion																			
	}

	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		GenerateCaptcha(label10);
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {			// виведення нової капчі
		GenerateCaptcha(label2);																	// виклик функція для створення капчі
	}

		   User^ FoundUser;																	// зміна за залогованого корстувача
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			users->Add(User1);																	// користувачі додані до лісту
			users->Add(User2);
			users->Add(User3);

			String^ entered_login = textBox4->Text;												// ініцалізація змінних
			String^ entered_password = textBox5->Text;
			String^ captcha = textBox6->Text;

			if (entered_login == "" || entered_password == "" || captcha == "") {
				throw gcnew FormatException();
			}

			bool autorized = false;																// флаг, якщо користувача знайдено

			for each (User ^ user in users) {													// перевірка даних для авторизації
				if (user->GetLogin() == entered_login && user->GetPassword() == entered_password) {
					if (label2->Text == captcha) {
						MessageBox::Show("Ви були успішно авторизовані", "Авторизація", MessageBoxButtons::OK, MessageBoxIcon::Information);
						autorized = true;
						FoundUser = user;

						FoundUser->SaveUserInFile();
					}
					else {
						throw CaptchaException("Помилка при введені капчі");
					}
					break;
				}
			}

			if (!autorized) {																	// якщо користувача не знайдено, виводимо месседжбокс
				throw NotAutorizedException("Помилка при авторизації");
			}
			else {
				MyForm1^ second_form = gcnew MyForm1(FoundUser);
				this->Hide();
				second_form->ShowDialog();
				this->Show();

				textBox4->Text = "";
				textBox5->Text = "";
				textBox6->Text = "";
				GenerateCaptcha(label2);
			}
		}
		catch (FormatException^ e) {															// виключення при неправильному форматі заповнення даних
			MessageBox::Show("Заповніть поля", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (CaptchaException& e) {															// власне виключення при неправильній капчі
			MessageBox::Show("Помилка при введені капчі", "Помилка капчі", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		catch (NotAutorizedException& e) {														// власне виключення при помилці авторизації
			MessageBox::Show("Даного користувача не знайдено\nПеревірте коректність логіну, паролю або капчі", "Авторизація", MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {			// генерація капчі на строрінці реєстрації
		GenerateCaptcha(label10);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = GeneratePassword();													// згенерувати пароль
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {	// перевірка паролю на складність при введенні
		String^ password = textBox2->Text;														// введений пароль
		String^ strength = CheckPassword(password, label11);									// перевірка паролю на складність
		label11->Text = strength;																// виведення тексту у Label
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ entered_login = textBox3->Text;												// ініцалізація змінних
			String^ entered_password = textBox2->Text;
			String^ captcha = textBox1->Text;

			if (entered_login == "" || entered_password == "" || captcha == "") {				// перевірка ввода даних
				throw gcnew FormatException();
			}

			if (captcha == label10->Text) {
				MessageBox::Show("Ви були успішно зареєстровані", "Реєстрація", MessageBoxButtons::OK, MessageBoxIcon::Information);
				User^ NewUser = gcnew User(entered_login, entered_password);
				users->Add(NewUser);
			}
			else {
				throw CaptchaException("Помилка при введені капчі");
			}
		}
		catch (FormatException^ e) {															// виключення при неправильному форматі заповнення даних
			MessageBox::Show("Заповніть поля", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (CaptchaException& e) {
			MessageBox::Show("Помилка при введені капчі", "Помилка капчі", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	};
}
