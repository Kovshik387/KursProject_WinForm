#include "Class.h"
#include "Functions.h"
#include "MyForm6.h"

using namespace System;
using namespace System::Threading::Tasks;

Admin::Admin()
{
	ifstream File(FILE_MAIN_NAME);	// конструктор ворует начальные данные
	if (File.is_open())
	{
		count = 0;
		while (!File.eof()) {
			string temp;	// временна€ переменна€ строчного типа
			getline(File, temp);
			this->admin_data.push_back(temp);
			count++;
		}
	}
	else { System::Windows::Forms::MessageBox::Show("‘айл повреждЄн", "ќшибка"); }
	File.close();
}


std::vector<std::string> Admin::Print_Admin_data()
{
	return admin_data;
}

void User::SetDay(int day)
{
	this->day = day;
}

Basket_::Basket_()
{
	ifstream File(FILE_BASKET_NAME);
	if (!File.is_open()) throw exception("File read error");
	while (!File.eof()) {
		bc++; string temp;	// 
		getline(File, temp);
		this->bk.push_back(temp);
	}
	File.close();
}

vector <string> Basket_::GetBK()
{
	return bk;
}

Builder::Builder()
{
	ifstream File(FILE_NAME);
	if (!File.is_open()) throw exception("File read error");
	while (!File.eof()) {
		id++; string temp;	// 
		getline(File, temp);
		this->data.push_back(temp);
	}
	File.close();
}

void Object_::item()
{
	regex regular(SEARCH_EXP_NEW);	// регул€рное выражение
	smatch find_word;
	vector<string>::iterator it = data.begin();// ”даление мусора
	int i = 0; // временна€ переменна€, но ќЌј Ќ≈ќЅ’ќƒ»ћј
	count = id;
	while (i < id) {
		if (!regex_match(data[i], find_word, regular)) {// проверка
			data.erase(data.begin() + i);
			id--; i--;									// сдвиг итератора 
		}
		i++;
	}
}

void Object_::Basket (int id_)
{
	fstream File(FILE_NAME); fstream File_Basket(FILE_BASKET_NAME, ios_base::app); // открытие файлов
	id_--; // аргумент передаваем в метод класса Object
	Basket_ basket_; auto valueBasket = basket_.GetBK();
	string temp; string buff;// временные переменные
	temp = (data[id_].c_str()[data[id_].size() - 1]);
	buff = data[id_];
	int count = stoi(temp); // преобразование из строчного типа в целочисленный
	if (count == 1) {									// проверка, если товар в одном экземпл€ре,
		buff.replace(buff.size() - 1, buff.size(), "1");// то удал€ем его из общего списка товаров
		if (valueBasket[NULL] == "") {
			File_Basket << buff;
		}
		else
		{
			File_Basket << endl << buff;
		}
		data.erase(data.begin() + id_);
	}
	else {
		buff.replace(buff.size() - 1, buff.size(), "1");
		if (valueBasket[NULL] == "") {
			File_Basket << buff;
		}
		else
		{
			File_Basket << endl << buff;
		} // запись данных в файл "корзина"
		count--; string temp2 = to_string(count); // преоброзование уменьшенного значени€ в строчный тип
		this->data[id_].replace(data[id_].size() - 1, data[id_].size(), temp2); // замена в векторе количества товара
	}
	File.close(); File_Basket.close(); // закрытие отработанных файлов
	ofstream File_New(FILE_NAME, ios_base::trunc); // открытие файла в режиме "запись в конец"
	if (!File_New.is_open()) throw exception("File read error"); // ошибка открыти€ файла
	for (int i = 0; i < data.size(); i++) {  // запись добавленного предмета в конец "корзины"
		if (i == data.size() - 1) File_New << data[i]; // костыль
		else File_New << data[i] << endl;			   //
	}
	File_New.close();
}

std::vector<string> Object_::Print()
{
	return data;
}

Shoes_::Shoes_()
{
	bool temp = true;
	smatch find_world;
	regex regular(SEARCH_SHOES);	// регул€рное выражение
	for (int i = 0; i < id; i++)
	{
		if (regex_search(data[i], find_world, regular)) {
			if (temp) begin = i;
			count++;
			Shoes_Data.push_back(data[i]);
			end = i;
			temp = false;
		}
		
	}
}

std::vector<std::string> Shoes_::Print()
{
	return Shoes_Data;
}

Pants_::Pants_()
{
	bool temp = true;
	smatch find_world;
	regex regular(SEARCH_PANTS);	// регул€рное выражение
	for (int i = 0; i < id; i++)
	{
		if (regex_search(data[i], find_world, regular)) {
			if (temp) begin = i;
			count++;
			Pants_Data.push_back(data[i]);
			end = i;
			temp = false;
		}
	}
}

std::vector<std::string> Pants_::Print()
{
	return Pants_Data;
}

Cloth_::Cloth_()
{
	bool temp = true;
	smatch find_world;
	regex regular(SEARCH_CLOTH);	// регул€рное выражение
	for (int i = 0; i < id; i++)
	{
		if (regex_search(data[i], find_world, regular)) {
			if (temp) begin = i;
			count++;
			Cloth_Data.push_back(data[i]);
			end = i;
			temp = false;
		}
	}
}

std::vector<std::string> Cloth_::Print()
{
	return Cloth_Data;
}
