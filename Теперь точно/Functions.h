#pragma once
#include <iostream>

using namespace System;
void DataAll();
void DataShoes();
void DataPants();
void DataCloth();
void SetData();
void ReGroupData();
System::String^ Convert_string_To_String(std::string& v);
std::string Convert_String_To_string(System::String^ s, std::string& os);