#pragma once

namespace PacketAnalyzer
{

	using System::String;

	delegate void AddListItem(String ^ items);

	delegate void DelegateThreadTask();

	public ref class NewThreadClass
	{
	public:
		DelegateThreadTask ^ DelToRun;
		System::Windows::Forms::Form^ _form;
		AddListItem ^_delToRun;
		NewThreadClass(System::Windows::Forms::Form^ form, AddListItem ^DelToRun);
		void Run();
	private:
	};
}
