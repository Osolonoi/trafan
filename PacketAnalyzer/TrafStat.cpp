
#include "stdio.h"
#include "TrafStat.h"


using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PacketAnalyzer::TrafStat form;
	Application::Run(%form);
	int libr();
}
