#pragma once

#include "MyForm2.h"

using namespace System;
using namespace System::Threading;
using namespace System::Windows::Forms;
using namespace System::Threading::Tasks;

public ref struct Temp
{
	Button^ zhizn;

	property System::Int32 value;
	property System::Guid order_id;

	Guid Check_goods(void)//D
	{
		while (value > 0)
		{
			value--;
			Thread::Sleep(1000);
		}
		return this->order_id;
	}

	void Order_goods(Task<Guid>^ temp)//B
	{
		zhizn->Enabled = true;
		MessageBox::Show("Заказ " + temp->Result + "\nПрибыл", "Состояние");
		this->value = 0;
		this->order_id = System::Guid::Empty;
	}
	Temp(Button^ zhizn) { value = 0; order_id = System::Guid::Empty; this->zhizn = zhizn; }
};