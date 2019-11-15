#include "connectFourGUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	connectfour::connectFourGUI form;
	Board b;

	form.WriteToConsole("Maddie is cool\n");
	form.WriteToConsole("jk\n");

	Application::Run(% form);
	return 0;
}