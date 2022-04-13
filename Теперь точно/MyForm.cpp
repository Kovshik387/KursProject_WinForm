#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "Functions.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Теперьточно::MyForm form;
	Application::Run(% form);
}

System::Void Теперьточно::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	Form::Hide();
	MyForm1^ form1 = gcnew MyForm1();
	form1->Show();
	return System::Void();
}

System::Void Теперьточно::MyForm::Admin_Click(System::Object^ sender, System::EventArgs^ e)
{
	ReGroupData();
	Form::Hide();
	MyForm2^ form2 = gcnew MyForm2();
	form2->Show();
	return System::Void();
}
