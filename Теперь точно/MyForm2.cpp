#include "MyForm2.h"
#include "Class.h"
#include "Functions.h"
#include "MyForm.h"

System::Void Теперьточно::MyForm2::ALL_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Object_ obj; obj.item();
	dataGridData->RowCount = obj.GetCount();

	HeaderA();
	
	Show();
	
	return System::Void();
}

System::Void Теперьточно::MyForm2::Shoes_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Shoes_ shoes; 
	dataGridData->RowCount = shoes.GetCount();

	HeaderA();

	ShowShoes();

	return System::Void();
}

System::Void Теперьточно::MyForm2::Pants_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Pants_ pants;
	dataGridData->RowCount = pants.GetCount();

	HeaderA();

	ShowPants();

	return System::Void();
}

System::Void Теперьточно::MyForm2::Cloth_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Cloth_ cloth;
	dataGridData->RowCount = cloth.GetCount();

	HeaderA();

	ShowCloth();

	DataCloth();
	return System::Void();
}

System::Void Теперьточно::MyForm2::butbask_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	Basket basket;
	
	if (basket.GetBC() == 1) { MessageBox::Show("Ваша корзина пуста", "Упс..."); }
	else
	{
		dataGridData->Rows->Clear();
		dataGridData->Columns->Clear();
		dataGridData->RowCount = basket.GetBC();
		HeaderA();

		Show();
	}
	return System::Void();
}

System::Void Теперьточно::MyForm2::Bask_Click(System::Object^ sender, System::EventArgs^ e)
{
		Basket basket;
		Object_ object; int a = object.GetCount();
		int ask = Convert::ToInt16(numericUpDown1->Text);
		if (ask > object.GetCount()) MessageBox::Show("Индекс не принадлежит диапазону", "упс");
		else {
			object.Basket(ask);
			dataGridData->Rows->Clear();
			dataGridData->Columns->Clear();
			Object_ obj; obj.item();
			dataGridData->RowCount = obj.GetCount();

			HeaderA();

			Show();
		}
}

System::Void Теперьточно::MyForm2::button2_Click(System::Object^ sender, System::EventArgs^ e) // заказ
{
	// поток доставки
	fstream File(FILE_BASKET_NAME, ios::out);
	MessageBox::Show("Ваш заказ собран,приблизительное время доставки ", "Успешно");
}

System::Void Теперьточно::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form::Hide();
	MyForm^ form = gcnew MyForm();
	form->Show();
}

void Теперьточно::MyForm2::HeaderA()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Список";
	c1->HeaderText = "Товар";
	c1->Width = 150;
	dataGridData->Columns->Add(c1);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::HeaderB()
{
	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Список";
	c2->HeaderText = "Корзина Ваших товаров";
	c2->Width = 150;
	dataGridData->Columns->Add(c2);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::ShowCloth()
{
	int temp = 0;
	Cloth_ cloth;
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_CLOTH);
	for (int i = cloth.GetBegin(); i < object.GetCount(); i++)
	{
		dataGridData->TopLeftHeaderCell->Value = "id";
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridData->Columns[0]->HeaderCell->Value = "####";
			dataGridData->Rows[temp]->Cells[0]->Value = "--->";
			dataGridData->Rows[temp]->Cells[1]->Value = Convert_string_To_String(v[i]);
			temp++;
		}
		else continue;
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

void Теперьточно::MyForm2::ShowBask()
{
	int temp = 0;
	Basket basket;
	std::vector<string> v = basket.GetBK();
	dataGridData->ClearSelection();
	for (int i = 0; i < basket.GetBC(); i++)
	{
		dataGridData->TopLeftHeaderCell->Value = "id";
		dataGridData->Rows[i]->HeaderCell->Value = Convert::ToString(temp +1);
		dataGridData->Columns[0]->HeaderCell->Value = "####";
		dataGridData->Rows[i]->Cells[0]->Value = "--->";
		dataGridData->Rows[i]->Cells[1]->Value = Convert_string_To_String(v[temp]);
		dataGridData->AutoResizeColumn(0);
		dataGridData->AutoResizeRows();
		temp++;
	}
}

void Теперьточно::MyForm2::ShowPants()
{
	int temp = 0;
	Pants_ pants;
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_PANTS);
	for (int i = pants.GetBegin(); i < object.GetCount(); i++)
	{
		dataGridData->TopLeftHeaderCell->Value = "id";
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Rows[temp]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridData->Columns[0]->HeaderCell->Value = "####";
			dataGridData->Rows[temp]->Cells[0]->Value = "--->";
			dataGridData->Rows[temp]->Cells[1]->Value = Convert_string_To_String(v[i]);
			temp++;
		}
		else continue;
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

//Было

//int temp;
//Pants_ pants;
//Object_ object; object.item();
//std::vector<string> v = object.Print();
//dataGridData->ClearSelection();
//temp = pants.GetBegin();
//for (int i = 0; i < pants.GetCount(); i++)
//{
//	dataGridData->TopLeftHeaderCell->Value = "id";
//	dataGridData->Rows[i]->HeaderCell->Value = Convert::ToString(temp + 1);
//	dataGridData->Columns[0]->HeaderCell->Value = "####";
//	dataGridData->Rows[i]->Cells[0]->Value = "--->";
//	dataGridData->Rows[i]->Cells[1]->Value = Convert_string_To_String(v[temp]);
//	dataGridData->AutoResizeColumn(0);
//	dataGridData->AutoResizeRows();
//	temp++;
//}

void Теперьточно::MyForm2::ShowShoes()
{
	int temp;
	Shoes_ shoes; 
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	temp = shoes.GetBegin();
	smatch find_world;
	regex regular(SEARCH_SHOES);
	for (int i = shoes.GetBegin(); i < object.GetCount(); i++)
	{
		dataGridData->TopLeftHeaderCell->Value = "id";
		
		if (regex_search(v[i], find_world, regular)) {

			dataGridData->Rows[temp]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridData->Columns[0]->HeaderCell->Value = "####";
			dataGridData->Rows[temp]->Cells[0]->Value = "--->";
			dataGridData->Rows[temp]->Cells[1]->Value = Convert_string_To_String(v[i]);
			temp++;
		}
		else continue;
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

void Теперьточно::MyForm2::Show()
{
	Object_ object;
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	if (v[0] == "") { MessageBox::Show("Магазин временно закрыт, Администрация скоро исправит ситуацию", "Упсс...."); 	
		Form::Hide();
		MyForm^ form = gcnew MyForm();
		form->Show();
	}
	for (int i = 0; i < object.GetCount(); i++)
	{
		object.item();
		dataGridData->TopLeftHeaderCell->Value = "id";
		dataGridData->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridData->Columns[0]->HeaderCell->Value = "####";
		dataGridData->Rows[i]->Cells[0]->Value = "--->";
		dataGridData->Rows[i]->Cells[1]->Value = Convert_string_To_String(v[i]);
		dataGridData->AutoResizeColumn(0);
		dataGridData->AutoResizeRows();
	}
}
