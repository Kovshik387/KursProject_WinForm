#include "MyForm2.h"
#include "Class.h"
#include "Functions.h"
#include "MyForm.h"

using namespace System::Threading;
using namespace System::Threading::Tasks;

System::Void Теперьточно::MyForm2::ALL_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Object_ obj; auto v = obj.Print(); obj.item();
	dataGridData->RowCount = obj.GetCount();
	if (v[0] == "") MessageBox::Show("Магазин временно закрыт, Администрация скоро исправит ситуацию", "Упсс....");
	else
	{
		HeaderA();
		HeaderB();
		HeaderC();
		HeaderD();
		HeaderE();
		HeaderF();
		HeaderG();
		HeaderH();
		HeaderI();
		dataGridData->AutoResizeRows();
		Show();
	}
}

System::Void Теперьточно::MyForm2::Shoes_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Shoes_ shoes; Object_ obj;
	auto v = obj.Print();
	dataGridData->RowCount = shoes.GetCount();
	if (v[0] == "") MessageBox::Show("Магазин временно закрыт, Администрация скоро исправит ситуацию", "Упсс....");
	else
	{
		HeaderA();
		HeaderB();
		HeaderC();
		HeaderD();
		HeaderE();
		HeaderF();
		HeaderG();
		HeaderH();
		HeaderI();
		dataGridData->AutoResizeRows();
		ShowShoes();
	}
}

System::Void Теперьточно::MyForm2::Pants_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Pants_ pants; Object_ obj; auto v = obj.Print();
	dataGridData->RowCount = pants.GetCount();
	if (v[0] == "") MessageBox::Show("Магазин временно закрыт, Администрация скоро исправит ситуацию", "Упсс....");
	else
	{
		HeaderA();
		HeaderB();
		HeaderC();
		HeaderD();
		HeaderE();
		HeaderF();
		HeaderG();
		HeaderH();
		HeaderI();
		dataGridData->AutoResizeRows();
		ShowPants();
	}
}

System::Void Теперьточно::MyForm2::Cloth_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
	Cloth_ cloth; Object_ obj; auto v = obj.Print();
	dataGridData->RowCount = cloth.GetCount();
	if (v[0] == "") MessageBox::Show("Магазин временно закрыт, Администрация скоро исправит ситуацию", "Упсс....");
	else
	{
		HeaderA();
		HeaderB();
		HeaderC();
		HeaderD();
		HeaderE();
		HeaderF();
		HeaderG();
		HeaderH();
		HeaderI();
		dataGridData->AutoResizeRows();
		ShowCloth();
	}
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
		HeaderB();
		HeaderC();
		HeaderD();
		HeaderE();
		HeaderF();
		HeaderG();
		HeaderH();
		HeaderI();
		ShowBask();
	}
	return System::Void();
}

System::Void Теперьточно::MyForm2::Bask_Click(System::Object^ sender, System::EventArgs^ e)
{
		Basket basket;
		Object_ object;
		object.item();
		vector<string> ve = object.Print();
		int ask = Convert::ToInt16(numericUpDown1->Text);
		if ((ask > object.GetCount()) || (ve[0] == "")) { MessageBox::Show("Индекс не принадлежит диапазону", "упс"); }
		else {
			object.Basket(ask);
			dataGridData->Rows->Clear();
			dataGridData->Columns->Clear();
			Object_ obj; obj.item();auto v = obj.Print();
			dataGridData->RowCount = obj.GetCount();
			HeaderA();
			HeaderB();
			HeaderC();
			HeaderD();
			HeaderE();
			HeaderF();
			HeaderG();
			HeaderH();
			HeaderI();
			Show();
		}
}

System::Void Теперьточно::MyForm2::button2_Click(System::Object^ sender, System::EventArgs^ e) // заказ
{
	// поток доставки
	fstream File(FILE_BASKET_NAME, ios::out);
	srand(time(NULL));
	int day = 1 + rand() % 15;
	DateTime date1 = DateTime::Today;
	int day_temp = Convert::ToInt16(date1.Day) + day;
	String^ Str = "Ваш заказ собран,приблизительное время доставки " + day_temp.ToString() + " Апреля";
	MessageBox::Show(Str, "Успешно");
	dataGridData->Rows->Clear();
	dataGridData->Columns->Clear();
}

System::Void Теперьточно::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form::Hide();
	MyForm^ form = gcnew MyForm();
	form->Show();
}

void Pur() 
{
	Thread::Sleep(3000);
	User user; auto u = user.GetDay();
	u--;
	user.SetDay(u);
	Thread::Sleep(3000);
}

System::Void Теперьточно::MyForm2::puc_Click(System::Object^ sender, System::EventArgs^ e)
{

}

void Теперьточно::MyForm2::HeaderA()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Список";
	c1->HeaderText = "Тип";
	c1->Width = 150;
	dataGridData->Columns->Add(c1);

	dataGridData->AutoResizeColumn(0);
}
//new
void Теперьточно::MyForm2::HeaderB()
{
	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Список";
	c2->HeaderText = "Категория";
	c2->Width = 150;
	dataGridData->Columns->Add(c2);

	dataGridData->AutoResizeColumn(0);
}
void Теперьточно::MyForm2::HeaderC()
{
	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Список";
	c3->HeaderText = "Пол";
	c3->Width = 150;
	dataGridData->Columns->Add(c3);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::HeaderD()
{
	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "Список";
	c4->HeaderText = "Бренд";
	c4->Width = 150;
	dataGridData->Columns->Add(c4);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::HeaderE()
{
	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Список";
	c5->HeaderText = "Модель";
	c5->Width = 150;
	dataGridData->Columns->Add(c5);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::HeaderF()
{
	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "Список";
	c6->HeaderText = "Размер";
	c6->Width = 150;
	dataGridData->Columns->Add(c6);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::HeaderG()
{
	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "Список";
	c7->HeaderText = "Цена";
	c7->Width = 150;
	dataGridData->Columns->Add(c7);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::HeaderH()
{
	DataGridViewTextBoxColumn^ c8 = gcnew DataGridViewTextBoxColumn();
	c8->Name = "Список";
	c8->HeaderText = "Цвет";
	c8->Width = 150;
	dataGridData->Columns->Add(c8);

	dataGridData->AutoResizeColumn(0);
}

void Теперьточно::MyForm2::HeaderI()
{
	DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
	c9->Name = "Список";
	c9->HeaderText = "Количество";
	c9->Width = 150;
	dataGridData->Columns->Add(c9);

	dataGridData->AutoResizeColumn(0);
}

//void Теперьточно::MyForm2::HeaderE()
//{
//	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
//	c5->Name = "Список";
//	c5->HeaderText = "Корзина Ваших товаров";
//	c5->Width = 150;
//	dataGridData->Columns->Add(c5);
//	dataGridData->AutoResizeColumn(0);
//}
//end new

void Теперьточно::MyForm2::ShowCloth()
{
	int temp = 0;
	Cloth_ cloth;
	Object_ object;
	object.item();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_CLOTH);
	std::vector<string> v = object.Print();
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = cloth.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[0]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[1]->Value = Convert_string_To_String(ones_v[i].Category);
			dataGridData->Rows[temp]->Cells[2]->Value = Convert_string_To_String(ones_v[i].Type);
			dataGridData->Rows[temp]->Cells[3]->Value = Convert_string_To_String(ones_v[i].Gender);
			dataGridData->Rows[temp]->Cells[4]->Value = Convert_string_To_String(ones_v[i].Brand);
			dataGridData->Rows[temp]->Cells[5]->Value = Convert_string_To_String(ones_v[i].Model);
			dataGridData->Rows[temp]->Cells[6]->Value = Convert_string_To_String(ones_v[i].Size);
			dataGridData->Rows[temp]->Cells[7]->Value = Convert_string_To_String(ones_v[i].Price);
			dataGridData->Rows[temp]->Cells[8]->Value = Convert_string_To_String(ones_v[i].Color);
			dataGridData->Rows[temp]->Cells[9]->Value = Convert_string_To_String(ones_v[i].Count);
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
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
	vector<Ones> ones_v = ReturnCell(v, basket.GetBC());
	for (int i = 0; i < basket.GetBC(); i++)
	{
		dataGridData->Columns[0]->HeaderCell->Value = "id";
		dataGridData->Rows[temp]->Cells[0]->Value = Convert::ToString(i + 1);
		dataGridData->Rows[temp]->Cells[1]->Value = Convert_string_To_String(ones_v[i].Category);
		dataGridData->Rows[temp]->Cells[2]->Value = Convert_string_To_String(ones_v[i].Type);
		dataGridData->Rows[temp]->Cells[3]->Value = Convert_string_To_String(ones_v[i].Gender);
		dataGridData->Rows[temp]->Cells[4]->Value = Convert_string_To_String(ones_v[i].Brand);
		dataGridData->Rows[temp]->Cells[5]->Value = Convert_string_To_String(ones_v[i].Model);
		dataGridData->Rows[temp]->Cells[6]->Value = Convert_string_To_String(ones_v[i].Size);
		dataGridData->Rows[temp]->Cells[7]->Value = Convert_string_To_String(ones_v[i].Price);
		dataGridData->Rows[temp]->Cells[8]->Value = Convert_string_To_String(ones_v[i].Color);
		dataGridData->Rows[temp]->Cells[9]->Value = Convert_string_To_String(ones_v[i].Count);
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
	smatch find_world;
	regex regular(SEARCH_PANTS);
	std::vector<string> v = object.Print();
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = pants.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[0]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[1]->Value = Convert_string_To_String(ones_v[i].Category);
			dataGridData->Rows[temp]->Cells[2]->Value = Convert_string_To_String(ones_v[i].Type);
			dataGridData->Rows[temp]->Cells[3]->Value = Convert_string_To_String(ones_v[i].Gender);
			dataGridData->Rows[temp]->Cells[4]->Value = Convert_string_To_String(ones_v[i].Brand);
			dataGridData->Rows[temp]->Cells[5]->Value = Convert_string_To_String(ones_v[i].Model);
			dataGridData->Rows[temp]->Cells[6]->Value = Convert_string_To_String(ones_v[i].Size);
			dataGridData->Rows[temp]->Cells[7]->Value = Convert_string_To_String(ones_v[i].Price);
			dataGridData->Rows[temp]->Cells[8]->Value = Convert_string_To_String(ones_v[i].Color);
			dataGridData->Rows[temp]->Cells[9]->Value = Convert_string_To_String(ones_v[i].Count);
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

void Теперьточно::MyForm2::ShowShoes()
{
	int temp = 0;
	Shoes_ shoes; 
	shoes.Print();
	Object_ object;
	object.item();
	std::vector<string> v = object.Print();
	dataGridData->ClearSelection();
	smatch find_world;
	regex regular(SEARCH_SHOES);
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = shoes.GetBegin(); i < object.GetCount(); i++)
	{
		if (regex_search(v[i], find_world, regular)) {
			dataGridData->Columns[0]->HeaderCell->Value = "id";
			dataGridData->Rows[temp]->Cells[0]->Value = Convert::ToString(i + 1);
			dataGridData->Rows[temp]->Cells[1]->Value = Convert_string_To_String(ones_v[i].Category);
			dataGridData->Rows[temp]->Cells[2]->Value = Convert_string_To_String(ones_v[i].Type);
			dataGridData->Rows[temp]->Cells[3]->Value = Convert_string_To_String(ones_v[i].Gender);
			dataGridData->Rows[temp]->Cells[4]->Value = Convert_string_To_String(ones_v[i].Brand);
			dataGridData->Rows[temp]->Cells[5]->Value = Convert_string_To_String(ones_v[i].Model);
			dataGridData->Rows[temp]->Cells[6]->Value = Convert_string_To_String(ones_v[i].Size);
			dataGridData->Rows[temp]->Cells[7]->Value = Convert_string_To_String(ones_v[i].Price);
			dataGridData->Rows[temp]->Cells[8]->Value = Convert_string_To_String(ones_v[i].Color);
			dataGridData->Rows[temp]->Cells[9]->Value = Convert_string_To_String(ones_v[i].Count);
			dataGridData->AutoResizeColumn(0);
			dataGridData->AutoResizeRows();
			temp++;
		}
	}
	dataGridData->AutoResizeColumn(0);
	dataGridData->AutoResizeRows();
}

void Теперьточно::MyForm2::Show()
{
	Object_ object;
	object.item();
	auto v = object.Print();
	vector<Ones> ones_v = ReturnCell(v, object.GetCount());
	for (int i = 0 ; i < object.GetCount();i++)
	{
		dataGridData->Columns[0]->HeaderCell->Value = "id";
		dataGridData->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
		dataGridData->Rows[i]->Cells[1]->Value = Convert_string_To_String(ones_v[i].Category);
		dataGridData->Rows[i]->Cells[2]->Value = Convert_string_To_String(ones_v[i].Type);
		dataGridData->Rows[i]->Cells[3]->Value = Convert_string_To_String(ones_v[i].Gender);
		dataGridData->Rows[i]->Cells[4]->Value = Convert_string_To_String(ones_v[i].Brand);
		dataGridData->Rows[i]->Cells[5]->Value = Convert_string_To_String(ones_v[i].Model);
		dataGridData->Rows[i]->Cells[6]->Value = Convert_string_To_String(ones_v[i].Size);
		dataGridData->Rows[i]->Cells[7]->Value = Convert_string_To_String(ones_v[i].Price);
		dataGridData->Rows[i]->Cells[8]->Value = Convert_string_To_String(ones_v[i].Color);
		dataGridData->Rows[i]->Cells[9]->Value = Convert_string_To_String(ones_v[i].Count);
		dataGridData->AutoResizeColumn(0);
		dataGridData->AutoResizeRows();
	}
}

// Работало 
//dataGridData->Rows[i]->Cells[1]->Value = Convert_string_To_String(v[i]);
