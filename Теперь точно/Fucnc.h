#pragma once

using namespace System;
using namespace System::Threading;
using namespace System::Windows::Forms;
using namespace System::Threading::Tasks;

public ref struct Temp
{
	property System::Int32 value;
	property System::Guid order_id;

	Guid D(void)
	{
		Console::WriteLine("Start");
		while (value > 0)
		{
			value--;
			Thread::Sleep(1000);
		}
		return this->order_id;
	}

	void B(Task<Guid>^ temp)
	{
		MessageBox::Show("Заказ " + temp->Result + "\nПрибыл", "Состояние");
		this->value = 0;
		this->order_id = System::Guid::Empty;
	}

	Temp(System::Void) { value = 0; order_id = System::Guid::Empty; }
};