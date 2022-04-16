#pragma once

namespace Теперьточно {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: System::Windows::Forms::Button^ ShowA;
	protected:
	private: System::Windows::Forms::Button^ Dat;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ delete_;
	private: System::Windows::Forms::GroupBox^ groupBox1;


















	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;















	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Cloth;
	private: System::Windows::Forms::Button^ Pants;
	private: System::Windows::Forms::Button^ Shoes;
	private: System::Windows::Forms::Label^ Category;
	private: System::Windows::Forms::PictureBox^ pictureBox1;














	private: System::ComponentModel::IContainer^ components;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->ShowA = (gcnew System::Windows::Forms::Button());
			this->Dat = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->delete_ = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Category = (gcnew System::Windows::Forms::Label());
			this->Cloth = (gcnew System::Windows::Forms::Button());
			this->Pants = (gcnew System::Windows::Forms::Button());
			this->Shoes = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ShowA
			// 
			this->ShowA->Location = System::Drawing::Point(12, 21);
			this->ShowA->Name = L"ShowA";
			this->ShowA->Size = System::Drawing::Size(131, 38);
			this->ShowA->TabIndex = 0;
			this->ShowA->Text = L"Склад";
			this->ShowA->UseVisualStyleBackColor = true;
			this->ShowA->Click += gcnew System::EventHandler(this, &MyForm3::ShowA_Click);
			// 
			// Dat
			// 
			this->Dat->Location = System::Drawing::Point(12, 65);
			this->Dat->Name = L"Dat";
			this->Dat->Size = System::Drawing::Size(131, 38);
			this->Dat->TabIndex = 1;
			this->Dat->Text = L"Передать товары в магазин";
			this->Dat->UseVisualStyleBackColor = true;
			this->Dat->Click += gcnew System::EventHandler(this, &MyForm3::Dat_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(199, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->Size = System::Drawing::Size(531, 379);
			this->dataGridView1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 397);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 22);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// delete_
			// 
			this->delete_->Location = System::Drawing::Point(12, 109);
			this->delete_->Name = L"delete_";
			this->delete_->Size = System::Drawing::Size(131, 38);
			this->delete_->TabIndex = 5;
			this->delete_->Text = L"Удалить выбранный товар";
			this->delete_->UseVisualStyleBackColor = true;
			this->delete_->Click += gcnew System::EventHandler(this, &MyForm3::delete__Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->Category);
			this->groupBox1->Controls->Add(this->Cloth);
			this->groupBox1->Controls->Add(this->Pants);
			this->groupBox1->Controls->Add(this->Shoes);
			this->groupBox1->Location = System::Drawing::Point(754, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(357, 379);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление товара";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 94);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 285);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Category
			// 
			this->Category->AutoSize = true;
			this->Category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Category->Location = System::Drawing::Point(6, 25);
			this->Category->Name = L"Category";
			this->Category->Size = System::Drawing::Size(86, 20);
			this->Category->TabIndex = 3;
			this->Category->Text = L"Category:";
			// 
			// Cloth
			// 
			this->Cloth->Location = System::Drawing::Point(246, 52);
			this->Cloth->Name = L"Cloth";
			this->Cloth->Size = System::Drawing::Size(105, 30);
			this->Cloth->TabIndex = 2;
			this->Cloth->Text = L"Cloth";
			this->Cloth->UseVisualStyleBackColor = true;
			this->Cloth->Click += gcnew System::EventHandler(this, &MyForm3::Cloth_Click);
			// 
			// Pants
			// 
			this->Pants->Location = System::Drawing::Point(127, 52);
			this->Pants->Name = L"Pants";
			this->Pants->Size = System::Drawing::Size(105, 30);
			this->Pants->TabIndex = 1;
			this->Pants->Text = L"Pants";
			this->Pants->UseVisualStyleBackColor = true;
			this->Pants->Click += gcnew System::EventHandler(this, &MyForm3::Pants_Click);
			// 
			// Shoes
			// 
			this->Shoes->Location = System::Drawing::Point(6, 52);
			this->Shoes->Name = L"Shoes";
			this->Shoes->Size = System::Drawing::Size(105, 30);
			this->Shoes->TabIndex = 0;
			this->Shoes->Text = L"Shoes";
			this->Shoes->UseVisualStyleBackColor = true;
			this->Shoes->Click += gcnew System::EventHandler(this, &MyForm3::Shoes_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(0, 19);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(131, 20);
			this->numericUpDown1->TabIndex = 7;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Location = System::Drawing::Point(12, 153);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(131, 47);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ввод id элемента";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1123, 431);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->delete_);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Dat);
			this->Controls->Add(this->ShowA);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1139, 470);
			this->MinimumSize = System::Drawing::Size(1139, 470);
			this->Name = L"MyForm3";
			this->Text = L"Admin Console";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowA_Click(System::Object^ sender, System::EventArgs^ e);
	private: void ShowAdmin();
	private: void HeaderAdmin();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); // выход amdin
	private: System::Void Dat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Shoes_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Pants_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Cloth_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void delete__Click_1(System::Object^ sender, System::EventArgs^ e);
};
}
