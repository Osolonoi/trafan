
#include "stdio.h"
#include "TrafStat.h"
#include "NewThreadClass.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace System::Threading;



[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PacketAnalyzer::TrafStat form;
	Application::Run(%form);
	int libr();


}



