#pragma once
#include "General.h"
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
		//MyForm1(void)
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вебсайтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->банківськіКартиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->безпекаДанихToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(1277, 30);
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
			this->безпекаДанихToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 0, 650, 0);
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
			this->tabControl1->Size = System::Drawing::Size(1106, 660);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1098, 625);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вебсайти";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(74, 79);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidth = 60;
			this->dataGridView1->Size = System::Drawing::Size(700, 429);
			this->dataGridView1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1098, 625);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Банківські карти";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1253, 91);
			this->label1->TabIndex = 2;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(1277, 885);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Вітаємо у нашому додатку, " + CurrentUser->GetLogin();				// виводимо в лейб повідомлення про вхід поточного користувача

		dataGridView1->ColumnCount = 3;								// cтвореня таблиці
		dataGridView1->RowCount = CurrentUser->UserWebsites->Count;

		dataGridView1->Columns[0]->HeaderText = "Url";				// назва стовбців таблиці	
		dataGridView1->Columns[1]->HeaderText = "Login";
		dataGridView1->Columns[2]->HeaderText = "Password";

		dataGridView1->Columns[0]->Width = 300;
		dataGridView1->Columns[1]->Width = 200;
		dataGridView1->Columns[2]->Width = 200;

		dataGridView1->Width = 60 + dataGridView1->Columns[0]->Width + dataGridView1->Columns[1]->Width + dataGridView1->Columns[2]->Width;

		for each (DataGridViewRow ^ row in dataGridView1->Rows) {		// змінюємо висоту для кожного рядку в таблиці
			row->Height = 60;
		}

		for (int i = 0; i < dataGridView1->RowCount; i++)			// назви для рядків
		{
			dataGridView1->Rows[i]->HeaderCell->Value = "#" + (i + 1).ToString();

			Website^ website = CurrentUser->UserWebsites[i];  // Получение элемента списка

			dataGridView1->Rows[i]->Cells[0]->Value = website->GetLink();     // Заполнение ячеек таблицы данными
			dataGridView1->Rows[i]->Cells[1]->Value = website->GetLogin();
			dataGridView1->Rows[i]->Cells[2]->Value = website->GetPassword();
		}
	}

	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();  // Закрываем текущую форму (вторую)
	}
	};
}
