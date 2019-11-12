#include "connectFourGUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	connectfour::connectFourGUI form;
	Application::Run(% form);

	Board ^ b = gcnew Board();
}