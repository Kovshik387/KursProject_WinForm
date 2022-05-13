#include "MyForm1.h"
#include "MyForm3.h"
#include "MyForm.h"

System::Void Теперьточно::MyForm1::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    /*return System::Void();*/
}

System::Void Теперьточно::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == "OOP1337")
    {
        MyForm3^ form3 = gcnew MyForm3();
        form3->Show();
        this->Hide();
    }
    else
    {
        MessageBox::Show("Неверный пароль");
    }
    return System::Void();
}

System::Void Теперьточно::MyForm1::Backkk_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm^ form = gcnew MyForm();
    
    form->Show();
    this->Hide();
    
}

int i = 0;

System::Void Теперьточно::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    int i = 0;
    if (i == 0) {
        textBox1->PasswordChar = '\0';
        i = 1;
    }
    else {
        textBox1->PasswordChar = '*';
        i = 0;
    }
}
