#include "NewThreadClass.h"

namespace PacketAnalyzer
{
	using System::Threading::Thread;

	NewThreadClass::NewThreadClass(System::Windows::Forms::Form^ form, AddListItem ^DelToRun)
	{
		_form = form;
		_delToRun = DelToRun;
	}

	void NewThreadClass::Run()
	{
		// Execute the specified delegate on the thread that owns
		// 'myFormControl1' control's underlying window handle.

		Thread::Sleep(10000);
		//myFormControl1->Invoke(myFormControl1->myDelegate, "1");
		String ^ss;
		_form->Invoke(_delToRun, ss);
	}
}
