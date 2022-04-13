#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <regex>
#include <algorithm>
#include <ctime>

#define FILE_BASKET_NAME "Basket.txt"		//
#define FILE_NAME "Data.txt"				// »мена ‘айлов
#define FILE_MAIN_NAME "DefualtData.txt"	//
#define SEARCH_EXP_NEW R"(\w{2,6}\s\w{2,10}\s\w{3,5}\s\w{3,15}\s\w{3,15}\s\d{1,2}\s\d{2,6}\s\w{3,7}\s\d{1})" //ќбщее регул€рное выражение
#define SEARCH_SHOES R"((Shoes)\s\w{2,10}\s\w{3,5}\s\w{3,15}\s\w{3,15}\s\d{1,2}\s\d{2,6}\s\w{3,7}\s\d{1})" // –егул€рное выражение дл€ группы Shoes
#define SEARCH_PANTS R"((Pants)\s\w{2,10}\s\w{3,5}\s\w{3,15}\s\w{3,15}\s\d{1,2}\s\d{2,6}\s\w{3,7}\s\d{1})" // –егул€рное выражение дл€ группы Pants
#define SEARCH_CLOTH R"((Cloth)\s\w{2,10}\s\w{3,5}\s\w{3,15}\s\w{3,15}\s\d{1,2}\s\d{2,6}\s\w{3,7}\s\d{1})" // –егул€рное выражение дл€ группы Cloth

using namespace std;


class Admin
{
public:
	Admin();
	void Print_Admin_data();
	string GetPassword() { return Password; };
private:
	string Password = "OOP1337";
	vector <string> admin_data;
};

class User
{
public:
	/*void Purchase();*/
	void SetDay(int day);
	int GetDay() { return day; }
private:
	/*static*/ int day;
};

//int User::day = 0;

class Builder
{
public:
	void virtual item() = 0;
	std::vector<std::string> virtual Print() = 0;
	Builder();
protected:
	vector<string> data;
	int id = 0;
};

class Basket
{
public:
	Basket();
	vector <string> GetBK();
	int GetBC() { return bc; }
private:
	int bc = 0; // basket count
	vector <string> bk; // basket ko
};

class Object_ : public Builder
{
public:
	void item() override;
	void Basket(int id_);
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd()   { return end; }
protected:
	vector <string> basket_;
	int count;
	int begin;
	int end;
};

class Shoes_ : public Object_
{
public:
	Shoes_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Shoes_Data;
	int count = 0;
};

class Pants_ : public Object_
{
public:
	Pants_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetEnd() { return end; }
protected:
	vector <string> Pants_Data;
	int count = 0;
};

class Cloth_ : public Object_
{
public:
	Cloth_();
	std::vector<std::string> Print() override;
	int GetCount() { return count; }
	int GetBegin() { return begin; }
	int GetEnd() { return end; }
protected:
	vector <string> Cloth_Data;
	int count = 0;
};

