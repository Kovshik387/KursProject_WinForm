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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->ShowA = (gcnew System::Windows::Forms::Button());
			this->Dat = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(199, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->Size = System::Drawing::Size(531, 184);
			this->dataGridView1->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Добавить товар вручную";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 22);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 430);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Dat);
			this->Controls->Add(this->ShowA);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm3";
			this->Text = L"Admin Console";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowA_Click(System::Object^ sender, System::EventArgs^ e);
	private: void ShowAdmin();
	private: void HeaderAdmin();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); // выход amdin
};
}
