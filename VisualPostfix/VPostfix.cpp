#include "VPostfix.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	VisualPostfix::VPostfix form;
	Application::Run(%form);
}