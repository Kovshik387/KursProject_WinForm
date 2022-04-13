#include "Functions.h"
#include "Class.h"
//описание функций

using namespace System;

void DataAll()
{
	int ask = 0; // рофл чё
	Object_ object;
	object.item(); object.Print();
	if (ask > object.GetCount() && ask != '0')
	{
		object.Basket(ask);
	}
}

void DataShoes()
{
	int ask = 0;
	Object_ object;
	Shoes_ shoes; shoes.Print();
	//if (ask > shoes.GetCount() && ask <= 0)
	//{
	//	shoes.Basket(ask);
	//}
}

void DataPants()
{
	int ask = 0;
	Object_ object;
	Pants_ pants; pants.Print();
	if (ask > pants.GetCount() && ask <= 0)
	{
		pants.Basket(ask);
	}
}

void DataCloth()
{
	int ask = 0;
	Object_ object;
	Cloth_ cloth; cloth.Print();
	if (ask > cloth.GetCount() && ask <= 0)
	{
		cloth.Basket(ask);
	}
}

void SetData()	// Функция возвращение данных в исходный вид
{
	ifstream File_Default(FILE_MAIN_NAME);
	vector<string> temp_data; string temp;
	if (!File_Default.is_open()) throw exception("File read error");
	while (!File_Default.eof()) {
		getline(File_Default, temp);
		temp_data.push_back(temp);
	}
	File_Default.close();
	ofstream File_Data(FILE_NAME, ios_base::trunc);
	if (!File_Data.is_open()) throw exception("File read error");
	for (int i = 0; i < temp_data.size(); i++) {
		if (i == temp_data.size() - 1) File_Data << temp_data[i];
		else File_Data << temp_data[i] << endl;
	}

	File_Data.close();
}

void ReGroupData()
{
	std::vector<std::string> regroup;
	Object_ obj;
	obj.item();
	regroup = obj.Print();
	ofstream File_New(FILE_NAME, ios_base::trunc); // открытие файла в режиме "запись в конец"
	if (!File_New.is_open()) throw exception("File read error"); // ошибка открытия файла
	for (int i = 0; i < regroup.size(); i++) {  // запись добавленного предмета в конец "корзины"
		if (i == regroup.size() - 1) File_New << regroup[i]; // костыль
		else File_New << regroup[i] << endl;			   //
	}
}

std::string Convert_String_To_string(System::String^ s, std::string& os) // из String в std::string
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();

	return os;
}

System::String^ Convert_string_To_String(std::string& os) // из std::string в String
{
	System::String^ s;
	s = gcnew System::String(os.c_str());
	return s;
}