#pragma once
#include "General.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"

namespace KhomychLr14TxPrZSGr22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		User^ CurrentUser;
	public:
		MyForm1(User^ u)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ безпекаДанихToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ToolStripMenuItem^ виглядToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вебсайтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ колірФонуКнопокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ колірТекстуКнопокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ колірФонуКомірокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ колірТекстуКомірокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шрифтКомірокToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem;






	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::ToolStripMenuItem^ банківськіКартиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ колірФонуКнопокToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ колірТекстуКнопокToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ колірФонуКомірокToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ колірТекстуКомірокToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ шрифтКомірокToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ шрифтКнопокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шрифтКнопокToolStripMenuItem1;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->виглядToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вебсайтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірФонуКнопокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірТекстуКнопокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірФонуКомірокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірТекстуКомірокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтКомірокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтКнопокToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->банківськіКартиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірФонуКнопокToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірТекстуКнопокToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірФонуКомірокToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->колірТекстуКомірокToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтКомірокToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтКнопокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->безпекаДанихToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->виглядToolStripMenuItem,
					this->зберегтиToolStripMenuItem, this->безпекаДанихToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(979, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// виглядToolStripMenuItem
			// 
			this->виглядToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вебсайтиToolStripMenuItem,
					this->банківськіКартиToolStripMenuItem
			});
			this->виглядToolStripMenuItem->Name = L"виглядToolStripMenuItem";
			this->виглядToolStripMenuItem->Size = System::Drawing::Size(84, 26);
			this->виглядToolStripMenuItem->Text = L"Вигляд";
			// 
			// вебсайтиToolStripMenuItem
			// 
			this->вебсайтиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->колірФонуКнопокToolStripMenuItem,
					this->колірТекстуКнопокToolStripMenuItem, this->колірФонуКомірокToolStripMenuItem, this->колірТекстуКомірокToolStripMenuItem,
					this->шрифтКомірокToolStripMenuItem, this->шрифтКнопокToolStripMenuItem1
			});
			this->вебсайтиToolStripMenuItem->Name = L"вебсайтиToolStripMenuItem";
			this->вебсайтиToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->вебсайтиToolStripMenuItem->Text = L"Вебсайти";
			// 
			// колірФонуКнопокToolStripMenuItem
			// 
			this->колірФонуКнопокToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірФонуКнопокToolStripMenuItem->Name = L"колірФонуКнопокToolStripMenuItem";
			this->колірФонуКнопокToolStripMenuItem->Size = System::Drawing::Size(236, 24);
			this->колірФонуКнопокToolStripMenuItem->Text = L"Колір фону кнопок";
			this->колірФонуКнопокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::колірФонуКнопокToolStripMenuItem_Click);
			// 
			// колірТекстуКнопокToolStripMenuItem
			// 
			this->колірТекстуКнопокToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірТекстуКнопокToolStripMenuItem->Name = L"колірТекстуКнопокToolStripMenuItem";
			this->колірТекстуКнопокToolStripMenuItem->Size = System::Drawing::Size(236, 24);
			this->колірТекстуКнопокToolStripMenuItem->Text = L"Колір тексту кнопок";
			this->колірТекстуКнопокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::колірТекстуКнопокToolStripMenuItem_Click);
			// 
			// колірФонуКомірокToolStripMenuItem
			// 
			this->колірФонуКомірокToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірФонуКомірокToolStripMenuItem->Name = L"колірФонуКомірокToolStripMenuItem";
			this->колірФонуКомірокToolStripMenuItem->Size = System::Drawing::Size(236, 24);
			this->колірФонуКомірокToolStripMenuItem->Text = L"Колір фону комірок";
			this->колірФонуКомірокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::колірФонуКомірокToolStripMenuItem_Click);
			// 
			// колірТекстуКомірокToolStripMenuItem
			// 
			this->колірТекстуКомірокToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірТекстуКомірокToolStripMenuItem->Name = L"колірТекстуКомірокToolStripMenuItem";
			this->колірТекстуКомірокToolStripMenuItem->Size = System::Drawing::Size(236, 24);
			this->колірТекстуКомірокToolStripMenuItem->Text = L"Колір тексту комірок";
			this->колірТекстуКомірокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::колірТекстуКомірокToolStripMenuItem_Click);
			// 
			// шрифтКомірокToolStripMenuItem
			// 
			this->шрифтКомірокToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->шрифтКомірокToolStripMenuItem->Name = L"шрифтКомірокToolStripMenuItem";
			this->шрифтКомірокToolStripMenuItem->Size = System::Drawing::Size(236, 24);
			this->шрифтКомірокToolStripMenuItem->Text = L"Шрифт комірок";
			this->шрифтКомірокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::шрифтКомірокToolStripMenuItem_Click);
			// 
			// шрифтКнопокToolStripMenuItem1
			// 
			this->шрифтКнопокToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->шрифтКнопокToolStripMenuItem1->Name = L"шрифтКнопокToolStripMenuItem1";
			this->шрифтКнопокToolStripMenuItem1->Size = System::Drawing::Size(236, 24);
			this->шрифтКнопокToolStripMenuItem1->Text = L"Шрифт кнопок";
			this->шрифтКнопокToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::шрифтКнопокToolStripMenuItem1_Click);
			// 
			// банківськіКартиToolStripMenuItem
			// 
			this->банківськіКартиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->колірФонуКнопокToolStripMenuItem1,
					this->колірТекстуКнопокToolStripMenuItem1, this->колірФонуКомірокToolStripMenuItem1, this->колірТекстуКомірокToolStripMenuItem1,
					this->шрифтКомірокToolStripMenuItem1, this->шрифтКнопокToolStripMenuItem
			});
			this->банківськіКартиToolStripMenuItem->Name = L"банківськіКартиToolStripMenuItem";
			this->банківськіКартиToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->банківськіКартиToolStripMenuItem->Text = L"Банківські карти";
			// 
			// колірФонуКнопокToolStripMenuItem1
			// 
			this->колірФонуКнопокToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірФонуКнопокToolStripMenuItem1->Name = L"колірФонуКнопокToolStripMenuItem1";
			this->колірФонуКнопокToolStripMenuItem1->Size = System::Drawing::Size(236, 24);
			this->колірФонуКнопокToolStripMenuItem1->Text = L"Колір фону кнопок";
			this->колірФонуКнопокToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::колірФонуКнопокToolStripMenuItem1_Click);
			// 
			// колірТекстуКнопокToolStripMenuItem1
			// 
			this->колірТекстуКнопокToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірТекстуКнопокToolStripMenuItem1->Name = L"колірТекстуКнопокToolStripMenuItem1";
			this->колірТекстуКнопокToolStripMenuItem1->Size = System::Drawing::Size(236, 24);
			this->колірТекстуКнопокToolStripMenuItem1->Text = L"Колір тексту кнопок";
			this->колірТекстуКнопокToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::колірТекстуКнопокToolStripMenuItem1_Click);
			// 
			// колірФонуКомірокToolStripMenuItem1
			// 
			this->колірФонуКомірокToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірФонуКомірокToolStripMenuItem1->Name = L"колірФонуКомірокToolStripMenuItem1";
			this->колірФонуКомірокToolStripMenuItem1->Size = System::Drawing::Size(236, 24);
			this->колірФонуКомірокToolStripMenuItem1->Text = L"Колір фону комірок";
			this->колірФонуКомірокToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::колірФонуКомірокToolStripMenuItem1_Click);
			// 
			// колірТекстуКомірокToolStripMenuItem1
			// 
			this->колірТекстуКомірокToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->колірТекстуКомірокToolStripMenuItem1->Name = L"колірТекстуКомірокToolStripMenuItem1";
			this->колірТекстуКомірокToolStripMenuItem1->Size = System::Drawing::Size(236, 24);
			this->колірТекстуКомірокToolStripMenuItem1->Text = L"Колір тексту комірок";
			this->колірТекстуКомірокToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::колірТекстуКомірокToolStripMenuItem1_Click);
			// 
			// шрифтКомірокToolStripMenuItem1
			// 
			this->шрифтКомірокToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->шрифтКомірокToolStripMenuItem1->Name = L"шрифтКомірокToolStripMenuItem1";
			this->шрифтКомірокToolStripMenuItem1->Size = System::Drawing::Size(236, 24);
			this->шрифтКомірокToolStripMenuItem1->Text = L"Шрифт комірок";
			this->шрифтКомірокToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::шрифтКомірокToolStripMenuItem1_Click_1);
			// 
			// шрифтКнопокToolStripMenuItem
			// 
			this->шрифтКнопокToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->шрифтКнопокToolStripMenuItem->Name = L"шрифтКнопокToolStripMenuItem";
			this->шрифтКнопокToolStripMenuItem->Size = System::Drawing::Size(236, 24);
			this->шрифтКнопокToolStripMenuItem->Text = L"Шрифт кнопок";
			this->шрифтКнопокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::шрифтКнопокToolStripMenuItem_Click);
			// 
			// зберегтиToolStripMenuItem
			// 
			this->зберегтиToolStripMenuItem->Name = L"зберегтиToolStripMenuItem";
			this->зберегтиToolStripMenuItem->Size = System::Drawing::Size(100, 26);
			this->зберегтиToolStripMenuItem->Text = L"Зберегти";
			this->зберегтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::зберегтиToolStripMenuItem_Click);
			// 
			// безпекаДанихToolStripMenuItem
			// 
			this->безпекаДанихToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 0, 550, 0);
			this->безпекаДанихToolStripMenuItem->Name = L"безпекаДанихToolStripMenuItem";
			this->безпекаДанихToolStripMenuItem->Size = System::Drawing::Size(145, 26);
			this->безпекаДанихToolStripMenuItem->Text = L"Безпека даних";
			this->безпекаДанихToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::безпекаДанихToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(70, 26);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::вихідToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(79, 179);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(807, 660);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(799, 625);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вебсайти";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->textBox1->Location = System::Drawing::Point(529, 540);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 39);
			this->textBox1->TabIndex = 18;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button4->Location = System::Drawing::Point(93, 525);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(281, 68);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Видалити запис";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button3->Location = System::Drawing::Point(93, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(281, 68);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Додати запис";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button2->Location = System::Drawing::Point(447, 424);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(281, 68);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Складність паролів";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(51, 35);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowHeadersWidth = 60;
			this->dataGridView1->Size = System::Drawing::Size(700, 350);
			this->dataGridView1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(799, 625);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Банківські карти";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->textBox2->Location = System::Drawing::Point(529, 540);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 39);
			this->textBox2->TabIndex = 19;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::PaleGreen;
			this->button6->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button6->Location = System::Drawing::Point(93, 525);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(281, 68);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Видалити карту";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PaleGreen;
			this->button5->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button5->Location = System::Drawing::Point(93, 424);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(281, 68);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Додати карту";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button1->Location = System::Drawing::Point(447, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 68);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Термін дії карт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(51, 35);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->RowHeadersWidth = 60;
			this->dataGridView2->Size = System::Drawing::Size(700, 350);
			this->dataGridView2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(974, 91);
			this->label1->TabIndex = 2;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(979, 875);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сторінка користувача";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void CreateWebSiteDGW() {
			try {
				label1->Text = "Вітаємо у нашому додатку, " + CurrentUser->GetLogin();				// виводимо в лейб повідомлення про вхід поточного користувача

				dataGridView1->ColumnCount = 3;														// cтвореня таблиці даних вебсайтів
				dataGridView1->RowCount = CurrentUser->UserWebsites->Count;

				dataGridView1->Columns[0]->HeaderText = "Посилання";								// назва стовбців таблиці
				dataGridView1->Columns[1]->HeaderText = "Логін";
				dataGridView1->Columns[2]->HeaderText = "Пароль";

				dataGridView1->Columns[0]->Width = 300;												// стартова ширина колонок
				dataGridView1->Columns[1]->Width = 150;
				dataGridView1->Columns[2]->Width = 150;

				int totalWidth1 = 0;
				for (int i = 0; i < dataGridView1->ColumnCount; i++) {
					totalWidth1 += dataGridView1->Columns[i]->Width;
				}
				dataGridView1->Width = totalWidth1 + dataGridView1->ColumnHeadersHeight + 20;

				dataGridView1->Location = Point((tabPage1->Width - dataGridView1->Width) / 2, 40);	// робимо таблицю по центру
				for each (DataGridViewRow ^ row in dataGridView1->Rows) {							// змінюємо висоту для кожного рядку в таблиці
					row->Height = 60;
				}

				for (int i = 0; i < dataGridView1->RowCount; i++)									// назви для рядків
				{
					dataGridView1->Rows[i]->HeaderCell->Value = "#" + (i + 1).ToString();

					Website^ website = CurrentUser->UserWebsites[i];								// отримання елемента списка

					dataGridView1->Rows[i]->Cells[0]->Value = website->GetLink();					// заповнення комірок таблиці даними
					dataGridView1->Rows[i]->Cells[1]->Value = website->GetLogin();
					dataGridView1->Rows[i]->Cells[2]->Value = website->GetPassword();
				}
			}
			catch (ArgumentOutOfRangeException^ e) {												// обробка виключення
				MessageBox::Show("Звернення до неіснуючого елементу", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void CreateBankCardDGW() {
			try {
				dataGridView2->ColumnCount = 3;														// cтвореня таблиці даних банківських карт
				dataGridView2->RowCount = CurrentUser->UsersBankCards->Count;

				dataGridView2->Columns[0]->HeaderText = "Номер карти";								// назва стовбців таблиці	
				dataGridView2->Columns[1]->HeaderText = "Термін дії";
				dataGridView2->Columns[2]->HeaderText = "CVV код";

				dataGridView2->Columns[0]->Width = 300;												// стартова ширина колонок
				dataGridView2->Columns[1]->Width = 150;
				dataGridView2->Columns[2]->Width = 100;

				int totalWidth2 = 0;
				for (int i = 0; i < dataGridView2->ColumnCount; i++) {
					totalWidth2 += dataGridView2->Columns[i]->Width;
				}
				dataGridView2->Width = totalWidth2 + dataGridView2->ColumnHeadersHeight + 20;

				dataGridView2->Location = Point((tabPage2->Width - dataGridView2->Width) / 2, 40);	// робимо таблицю по центру

				for each (DataGridViewRow ^ row in dataGridView2->Rows) {							// змінюємо висоту для кожного рядку в таблиці
					row->Height = 60;
				}

				for (int i = 0; i < dataGridView2->RowCount; i++)									// назви для рядків
				{
					dataGridView2->Rows[i]->HeaderCell->Value = "#" + (i + 1).ToString();

					BankCard^ bankcard = CurrentUser->UsersBankCards[i];							// отримання елемента списка

					dataGridView2->Rows[i]->Cells[0]->Value = bankcard->GetCardNumber();			// заповнення комірок таблиці даними
					dataGridView2->Rows[i]->Cells[1]->Value = bankcard->GetExpirationDate();
					dataGridView2->Rows[i]->Cells[2]->Value = bankcard->GetCVV();
				}
			}
			catch (ArgumentOutOfRangeException^ e) {												// обробка виключення
				MessageBox::Show("Звернення до неіснуючого елементу", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {				// генерація таблиць даних
		CreateWebSiteDGW();
		CreateBankCardDGW();
	}

	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();																				// закриття поточної форми
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {				// віодображення діаграми для вебсайтів
		MyForm2^ third_form = gcnew MyForm2(CurrentUser);
		this->Hide();
		third_form->ShowDialog();
		this->Show();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {				// додавання запису
		try {
			MyForm3^ fourth_form = gcnew MyForm3();													// створюємо об'єкт форми вводу даних
			fourth_form->ShowDialog();																// виводимо другу форму

			if (fourth_form->textBox1->Text == "" || fourth_form->textBox2->Text == "" || fourth_form->textBox3->Text == "") {
				throw gcnew FormatException();
			}

			String^ Link = fourth_form->textBox1->Text;												// збергіаємо значення, введені користувачем
			String^ Login = fourth_form->textBox2->Text;
			String^ Password = fourth_form->textBox3->Text;

			Website^ new_website = gcnew Website(Link, Login, Password);							// створюємо об'єкт нового запису

			CurrentUser->UserWebsites->Add(new_website);											// додаємо до списку
			CreateWebSiteDGW();																		// генеруємо таблицю
		}
		catch (FormatException^ e) {																// виключення, коли користувач не ввів дані
			MessageBox::Show("Введіть дані", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {				// видалення запису
		try {
			int index = Convert::ToInt32(textBox1->Text);											// індекс елемента для видалення
			if (textBox1->Text == "") {
				throw gcnew FormatException();
			}
			CurrentUser->UserWebsites->RemoveAt(index - 1);											// видаляємо елемент
			CreateWebSiteDGW();																		// генеруємо таблицю
		}
		catch (ArgumentOutOfRangeException^ e) {													// обробка виключення
			MessageBox::Show("Спроба видалити неіснуючий запис", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (FormatException^ e) {																// виключення, коли користувач не ввів дані
			MessageBox::Show("Введіть дані", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {				// відображення діаграми для банківських карток
		MyForm4^ fifth_form = gcnew MyForm4(CurrentUser);
		this->Hide();
		fifth_form->ShowDialog();
		this->Show();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MyForm5^ sixth_form = gcnew MyForm5();													// створюємо об'єкт форми вводу даних
			sixth_form->ShowDialog();																// виводимо другу форму

			if (sixth_form->textBox1->Text == "" || sixth_form->textBox2->Text == "" || sixth_form->textBox3->Text == "") {
				throw gcnew FormatException();
			}

			String^ CardNumber = sixth_form->textBox1->Text;										// збергіаємо значення, введені користувачем
			String^ ExpirationDate = sixth_form->textBox2->Text;
			String^ CVVcode = sixth_form->textBox3->Text;

			BankCard^ new_bankcard = gcnew BankCard(CardNumber, ExpirationDate, CVVcode);			// створюємо об'єкт нового запису

			CurrentUser->UsersBankCards->Add(new_bankcard);											// додаємо до списку
			CreateBankCardDGW();																	// генеруємо таблицю
		}
		catch (FormatException^ e) {																// виключення, коли користувач не ввів дані
			MessageBox::Show("Введіть дані", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int index = Convert::ToInt32(textBox2->Text);											// індекс елемента для видалення
			if (textBox2->Text == "") {
				throw gcnew FormatException();
			}
			CurrentUser->UsersBankCards->RemoveAt(index - 1);										// видаляємо елемент
			CreateBankCardDGW();																	// генеруємо таблицю
		}
		catch (ArgumentOutOfRangeException^ e) {													// обробка виключення
			MessageBox::Show("Спроба видалити неіснуючий запис", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (FormatException^ e) {																// виключення, коли користувач не ввів дані
			MessageBox::Show("Введіть дані", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	private: System::Void колірФонуКнопокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		button2->BackColor = colorDialog1->Color;													// змінюємо колір кнопок
		button3->BackColor = colorDialog1->Color;
		button4->BackColor = colorDialog1->Color;

	}

	private: System::Void колірТекстуКнопокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		button2->ForeColor = colorDialog1->Color;													// змінємо колір тексту кнопок
		button3->ForeColor = colorDialog1->Color;
		button4->ForeColor = colorDialog1->Color;
	}

	private: System::Void колірФонуКомірокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		dataGridView1->DefaultCellStyle->BackColor = colorDialog1->Color;							// змінємо колір фону комірок

	}

	private: System::Void колірТекстуКомірокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		dataGridView1->DefaultCellStyle->ForeColor = colorDialog1->Color;							// змінюємо колір тексту комірок
	}

	private: System::Void шрифтКомірокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		dataGridView1->DefaultCellStyle->Font = fontDialog1->Font;									// змінюємо шрифт комірок
	}

	private: System::Void шрифтКнопокToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();																	// виводимо меню для вибору стилю тексту
		button2->Font = fontDialog1->Font;															// змінюємо шрифт кнопок
		button3->Font = fontDialog1->Font;
		button4->Font = fontDialog1->Font;
	}

	private: System::Void колірФонуКнопокToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		button1->BackColor = colorDialog1->Color;													// змінюємо колір кнопок
		button5->BackColor = colorDialog1->Color;
		button6->BackColor = colorDialog1->Color;
	}

	private: System::Void колірТекстуКнопокToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		button1->ForeColor = colorDialog1->Color;													// змінємо колір тексту кнопок
		button5->ForeColor = colorDialog1->Color;
		button6->ForeColor = colorDialog1->Color;
	}

	private: System::Void колірФонуКомірокToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		dataGridView2->DefaultCellStyle->BackColor = colorDialog1->Color;							// змінємо колір фону комірок
	}

	private: System::Void колірТекстуКомірокToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		dataGridView2->DefaultCellStyle->ForeColor = colorDialog1->Color;							// змінюємо колір тексту комірок
	}

	private: System::Void шрифтКомірокToolStripMenuItem1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();																	// виводимо меню для вибору кольору
		dataGridView2->DefaultCellStyle->Font = fontDialog1->Font;									// змінюємо шрифт комірокkk
	}

	private: System::Void шрифтКнопокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();																	// виводимо меню для вибору стилю тексту
		button1->Font = fontDialog1->Font;															// змінюємо шрифт кнопок
		button5->Font = fontDialog1->Font;
		button6->Font = fontDialog1->Font;
	}

	private: System::Void зберегтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CurrentUser->SaveUserInFile();																// збереження даних користувача
	}

	private: System::Void безпекаДанихToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Всі дані, які ви бачите в додатку зберігаються в хешованому вигляді.\nХешування відбувається за допомогою алгоритму SM3 бібліотеки Cryptopp.\nДякуємо за довіру!",
			"Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void шрифтКнопокToolStripMenuItem1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
