#include "MyForm3.h"
#include "Class.h"
#include "Functions.h"
#include "MyForm.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"

using namespace System;

System::Void Теперьточно::MyForm3::ShowA_Click(System::Object^ sender, System::EventArgs^ e)
{
	Admin ad;
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->RowCount = ad.GetCount();

	HeaderAdmin();
	ShowAdmin();

}

void Теперьточно::MyForm3::ShowAdmin()
{
	Admin admin;
	std::vector<std::string> v;
	v = admin.Print_Admin_data();
	int temp = 0;
	dataGridView1->TopLeftHeaderCell->Value = "id";
	for (int i = 0; i < v.size(); i++)
	{
		dataGridView1->Rows[temp]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridView1->Columns[0]->HeaderCell->Value = "####";
		dataGridView1->Rows[temp]->Cells[0]->Value = "--->";
		dataGridView1->Rows[temp]->Cells[1]->Value = Convert_string_To_String(v[i]);
		temp++;
	}
	dataGridView1->AutoResizeColumn(0);
	dataGridView1->AutoResizeRows();
}

Void Теперьточно::MyForm3::HeaderAdmin()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Список";
	c1->HeaderText = "Only Admin view";
	c1->Width = 150;
	dataGridView1->Columns->Add(c1);

	dataGridView1->AutoResizeColumn(0);
}

System::Void Теперьточно::MyForm3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form::Hide();
	MyForm^ form = gcnew MyForm();
	form->Show();
}

System::Void Теперьточно::MyForm3::Dat_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Успешно", "Состояние");
	SetData();
}

System::Void Теперьточно::MyForm3::Shoes_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm4^ form4 = gcnew MyForm4;
	form4->ShowDialog();
}

System::Void Теперьточно::MyForm3::Pants_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm5^ form5 = gcnew MyForm5;
	form5->ShowDialog();
}

System::Void Теперьточно::MyForm3::Cloth_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm6^ form6 = gcnew MyForm6;
	form6->ShowDialog();
}

System::Void Теперьточно::MyForm3::delete__Click_1(System::Object^ sender, System::EventArgs^ e)
{
	Admin admin;
	auto v = admin.Print_Admin_data();
	int ask = Convert::ToInt16(numericUpDown1->Text);
	if (ask > v.size() || v[0] == "") MessageBox::Show("Индекс находится вне диапазона", "Ошибка");
	else
	{
		ask--;
		v.erase(v.begin() + ask);
		ofstream File(FILE_MAIN_NAME, ios_base::trunc);
		for (int i = 0; i < v.size(); i++)
		{
			if (v.size() - 1 == i) File << v[i];
			else File << v[i] << endl;
		}
		File.close();
	}
}

//System::Void Теперьточно::MyForm3::button2_Click(System::Object^ sender, System::EventArgs^ e)
//{
//	string name;
//	String^ Str	= textBox1->Text->ToString();
//	name = Stos(Str);
//}
