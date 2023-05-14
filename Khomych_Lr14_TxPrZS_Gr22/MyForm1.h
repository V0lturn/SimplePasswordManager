#pragma once
#include "General.h"
#include "MyForm2.h"
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
	private: System::Windows::Forms::ToolStripMenuItem^ вебсайтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ банківськіКартиToolStripMenuItem;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вебсайтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->банківськіКартиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->безпекаДанихToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
				this->вебсайтиToolStripMenuItem,
					this->банківськіКартиToolStripMenuItem, this->безпекаДанихToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(979, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вебсайтиToolStripMenuItem
			// 
			this->вебсайтиToolStripMenuItem->Name = L"вебсайтиToolStripMenuItem";
			this->вебсайтиToolStripMenuItem->Size = System::Drawing::Size(102, 26);
			this->вебсайтиToolStripMenuItem->Text = L"Вебсайти";
			// 
			// банківськіКартиToolStripMenuItem
			// 
			this->банківськіКартиToolStripMenuItem->Name = L"банківськіКартиToolStripMenuItem";
			this->банківськіКартиToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->банківськіКартиToolStripMenuItem->Text = L"Банківські карти";
			// 
			// безпекаДанихToolStripMenuItem
			// 
			this->безпекаДанихToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 0, 470, 0);
			this->безпекаДанихToolStripMenuItem->Name = L"безпекаДанихToolStripMenuItem";
			this->безпекаДанихToolStripMenuItem->Size = System::Drawing::Size(145, 26);
			this->безпекаДанихToolStripMenuItem->Text = L"Безпека даних";
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
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(51, 35);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowHeadersWidth = 60;
			this->dataGridView1->Size = System::Drawing::Size(700, 350);
			this->dataGridView1->TabIndex = 1;
			// 
			// tabPage2
			// 
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
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(49, 35);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
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
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button2->Location = System::Drawing::Point(431, 413);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(281, 68);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Складність паролів";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button1->Location = System::Drawing::Point(211, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(359, 68);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Авторизуватись";
			this->button1->UseVisualStyleBackColor = false;
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
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void CreateWebSiteDGW() {
			label1->Text = "Вітаємо у нашому додатку, " + CurrentUser->GetLogin();				// виводимо в лейб повідомлення про вхід поточного користувача

			dataGridView1->ColumnCount = 3;								// cтвореня таблиці даних вебсайтів
			dataGridView1->RowCount = CurrentUser->UserWebsites->Count;

			dataGridView1->Columns[0]->HeaderText = "Посилання";				// назва стовбців таблиці
			dataGridView1->Columns[1]->HeaderText = "Логін";
			dataGridView1->Columns[2]->HeaderText = "Пароль";

			dataGridView1->Columns[0]->Width = 300;						// стартова ширина колонок
			dataGridView1->Columns[1]->Width = 150;
			dataGridView1->Columns[2]->Width = 150;

			int totalWidth1 = 0;
			for (int i = 0; i < dataGridView1->ColumnCount; i++) {
				totalWidth1 += dataGridView1->Columns[i]->Width;
			}
			dataGridView1->Width = totalWidth1 + dataGridView1->ColumnHeadersHeight + 20;

			dataGridView1->Location = Point((tabPage1->Width - dataGridView1->Width) / 2, 40);			// робимо таблицю по центру
			for each (DataGridViewRow ^ row in dataGridView1->Rows) {		// змінюємо висоту для кожного рядку в таблиці
				row->Height = 60;
			}

			for (int i = 0; i < dataGridView1->RowCount; i++)				// назви для рядків
			{
				dataGridView1->Rows[i]->HeaderCell->Value = "#" + (i + 1).ToString();

				Website^ website = CurrentUser->UserWebsites[i];			// отримання елемента списка

				dataGridView1->Rows[i]->Cells[0]->Value = website->GetLink();     // заповнення комірок таблиці даними
				dataGridView1->Rows[i]->Cells[1]->Value = website->GetLogin();
				dataGridView1->Rows[i]->Cells[2]->Value = website->GetPassword();
			}
		}

		void CreateBankCardDGW() {
			dataGridView2->ColumnCount = 3;								// cтвореня таблиці даних банківських карт
			dataGridView2->RowCount = CurrentUser->UsersBankCards->Count;

			dataGridView2->Columns[0]->HeaderText = "Номер карти";				// назва стовбців таблиці	
			dataGridView2->Columns[1]->HeaderText = "Термін дії";
			dataGridView2->Columns[2]->HeaderText = "CVV код";

			dataGridView2->Columns[0]->Width = 300;						// стартова ширина колонок
			dataGridView2->Columns[1]->Width = 150;
			dataGridView2->Columns[2]->Width = 100;

			int totalWidth2 = 0;
			for (int i = 0; i < dataGridView2->ColumnCount; i++) {
				totalWidth2 += dataGridView2->Columns[i]->Width;
			}
			dataGridView2->Width = totalWidth2 + dataGridView2->ColumnHeadersHeight + 20;

			dataGridView2->Location = Point((tabPage2->Width - dataGridView2->Width) / 2, 40);		// робимо таблицю по центру

			for each (DataGridViewRow ^ row in dataGridView2->Rows) {		// змінюємо висоту для кожного рядку в таблиці
				row->Height = 60;
			}

			for (int i = 0; i < dataGridView2->RowCount; i++)				// назви для рядків
			{
				dataGridView2->Rows[i]->HeaderCell->Value = "#" + (i + 1).ToString();

				BankCard^ bankcard = CurrentUser->UsersBankCards[i];			// отримання елемента списка

				dataGridView2->Rows[i]->Cells[0]->Value = bankcard->GetCardNumber();     // заповнення комірок таблиці даними
				dataGridView2->Rows[i]->Cells[1]->Value = bankcard->GetExpirationDate();
				dataGridView2->Rows[i]->Cells[2]->Value = bankcard->GetCVV();
			}
		}

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		CreateWebSiteDGW();
		CreateBankCardDGW();
	}

	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();  // Закрываем текущую форму (вторую)
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ third_form = gcnew MyForm2(CurrentUser);
		this->Hide();
		third_form->ShowDialog();
		this->Show();
	}
};
}
