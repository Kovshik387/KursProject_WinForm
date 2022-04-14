#pragma once

namespace Теперьточно {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ ALL;
	private: System::Windows::Forms::Button^ Shoes;
	private: System::Windows::Forms::Button^ Pants;
	private: System::Windows::Forms::Button^ Cloth;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridData;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Button^ Bask;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ butbask;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->ALL = (gcnew System::Windows::Forms::Button());
			this->Shoes = (gcnew System::Windows::Forms::Button());
			this->Pants = (gcnew System::Windows::Forms::Button());
			this->Cloth = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridData = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Bask = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->butbask = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridData))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// ALL
			// 
			this->ALL->Location = System::Drawing::Point(14, 53);
			this->ALL->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ALL->Name = L"ALL";
			this->ALL->Size = System::Drawing::Size(139, 37);
			this->ALL->TabIndex = 0;
			this->ALL->Text = L"Все вещи";
			this->ALL->UseVisualStyleBackColor = true;
			this->ALL->Click += gcnew System::EventHandler(this, &MyForm2::ALL_Click);
			// 
			// Shoes
			// 
			this->Shoes->Location = System::Drawing::Point(14, 97);
			this->Shoes->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Shoes->Name = L"Shoes";
			this->Shoes->Size = System::Drawing::Size(139, 37);
			this->Shoes->TabIndex = 1;
			this->Shoes->Text = L"Обувь";
			this->Shoes->UseVisualStyleBackColor = true;
			this->Shoes->Click += gcnew System::EventHandler(this, &MyForm2::Shoes_Click);
			// 
			// Pants
			// 
			this->Pants->Location = System::Drawing::Point(14, 141);
			this->Pants->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Pants->Name = L"Pants";
			this->Pants->Size = System::Drawing::Size(139, 37);
			this->Pants->TabIndex = 2;
			this->Pants->Text = L"Штаны";
			this->Pants->UseVisualStyleBackColor = true;
			this->Pants->Click += gcnew System::EventHandler(this, &MyForm2::Pants_Click);
			// 
			// Cloth
			// 
			this->Cloth->Location = System::Drawing::Point(14, 185);
			this->Cloth->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Cloth->Name = L"Cloth";
			this->Cloth->Size = System::Drawing::Size(139, 37);
			this->Cloth->TabIndex = 3;
			this->Cloth->Text = L"Вверхняя одежда";
			this->Cloth->UseVisualStyleBackColor = true;
			this->Cloth->Click += gcnew System::EventHandler(this, &MyForm2::Cloth_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridData);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(184, 14);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Size = System::Drawing::Size(566, 435);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление товара в корзину производится по уникальному номеру (id)";
			// 
			// dataGridData
			// 
			this->dataGridData->AllowUserToAddRows = false;
			this->dataGridData->AllowUserToDeleteRows = false;
			this->dataGridData->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridData->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridData->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridData->Location = System::Drawing::Point(7, 39);
			this->dataGridData->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridData->MinimumSize = System::Drawing::Size(58, 0);
			this->dataGridData->Name = L"dataGridData";
			this->dataGridData->ReadOnly = true;
			this->dataGridData->RowHeadersWidth = 55;
			this->dataGridData->RowTemplate->DividerHeight = 1;
			this->dataGridData->Size = System::Drawing::Size(551, 378);
			this->dataGridData->TabIndex = 6;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(150, 26);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// Bask
			// 
			this->Bask->Location = System::Drawing::Point(191, 451);
			this->Bask->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Bask->Name = L"Bask";
			this->Bask->Size = System::Drawing::Size(178, 39);
			this->Bask->TabIndex = 7;
			this->Bask->Text = L"Добавить в корзину";
			this->Bask->UseVisualStyleBackColor = true;
			this->Bask->Click += gcnew System::EventHandler(this, &MyForm2::Bask_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(377, 461);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(178, 21);
			this->numericUpDown1->TabIndex = 8;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(789, 463);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 15);
			this->label1->TabIndex = 9;
			// 
			// butbask
			// 
			this->butbask->Location = System::Drawing::Point(14, 228);
			this->butbask->Name = L"butbask";
			this->butbask->Size = System::Drawing::Size(139, 37);
			this->butbask->TabIndex = 10;
			this->butbask->Text = L"Корзина";
			this->butbask->UseVisualStyleBackColor = true;
			this->butbask->Click += gcnew System::EventHandler(this, &MyForm2::butbask_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 39);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Оформить Заказ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 37);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 503);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->butbask);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->Cloth);
			this->Controls->Add(this->Bask);
			this->Controls->Add(this->Pants);
			this->Controls->Add(this->Shoes);
			this->Controls->Add(this->ALL);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Интернет Магазин Zamay";
			this->Activated += gcnew System::EventHandler(this, &MyForm2::ALL_Click);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridData))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ALL_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Shoes_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Pants_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Cloth_Click(System::Object^ sender, System::EventArgs^ e);
private: void Show();
private: void HeaderA();
private: void HeaderB();
private: void ShowShoes();
private: void ShowPants();
private: void ShowCloth();
private: void ShowBask();
private: System::Void butbask_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Bask_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
