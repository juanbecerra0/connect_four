#include "connectFourGUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	connectfour::connectFourGUI form;
	Application::Run(% form);
	return 0;
}

connectfour::connectFourGUI::connectFourGUI(void)
{
	InitializeComponent();
	StartNewGame();
}

void connectfour::connectFourGUI::ChangeChipImage(System::Windows::Forms::Button^ b, int c)
{
	switch (c) {
	case 0:
		b->Image = chip_blank;;
		break;
	case 1:
		b->Image = chip_blue;
		break;
	case 2:
		b->Image = chip_orange;
		break;
	}
}

void connectfour::connectFourGUI::WriteToConsole(System::String^ s)
{
	this->gameConsole->AppendText(s + "\n");
}

void connectfour::connectFourGUI::StartNewGame(void)
{
	WriteToConsole("Starting new game...");
	board->NewGame();
}

connectfour::connectFourGUI::~connectFourGUI()
{
	if (components)
	{
		delete components;
	}
}

System::Void connectfour::connectFourGUI::connectFourGUI_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->debugCheckbox->Checked) {
		useDebug = true;
	}
	else {
		useDebug = false;
	}
}

System::Void connectfour::connectFourGUI::chip_00_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_01_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_02_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_03_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_04_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_05_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_06_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_10_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_11_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_12_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_13_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_14_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_15_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_16_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_20_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_21_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_22_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_23_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_24_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_25_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_26_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_30_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_31_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_32_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_33_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_34_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_35_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_36_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_40_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_41_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_42_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_43_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_44_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_45_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_46_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_50_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_51_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_52_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_53_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_54_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_55_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_56_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void connectfour::connectFourGUI::newGameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	StartNewGame();
}

System::Void connectfour::connectFourGUI::exitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	exit(0);
}
