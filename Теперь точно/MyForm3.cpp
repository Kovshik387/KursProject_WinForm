#include "MyForm3.h"
#include "Class.h"
#include "Functions.h"
#include "MyForm.h"

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
