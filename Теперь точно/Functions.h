#pragma once
#include <iostream>

using namespace System;

void SetData();
void ReGroupData();
System::String^ Convert_string_To_String(std::string& v);
std::string Stos(System::String^ s);