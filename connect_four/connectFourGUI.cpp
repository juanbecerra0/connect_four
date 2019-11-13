#include "connectFourGUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	connectfour::connectFourGUI form;
	Application::Run(% form);

	Board ^ b = gcnew Board();
}