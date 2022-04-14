#include "MyForm1.h"
#include "MyForm3.h"

System::Void Теперьточно::MyForm1::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    /*return System::Void();*/
}

System::Void Теперьточно::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == "OOP1337")
    {
        MyForm3^ form3 = gcnew MyForm3();
        MyForm1::Close();
        form3->Show();
    }
    else
    {
        MessageBox::Show("Неверный пароль");
    }
    return System::Void();
}
