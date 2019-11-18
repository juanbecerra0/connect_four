#include "connectFourGUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

/*
Initializes the GUI
*/
int main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	connectfour::connectFourGUI form;
	Application::Run(% form);
	return 0;
}

/*
Constructor: Initializes components of GUI and starts a new game
*/
connectfour::connectFourGUI::connectFourGUI(void)
{
	InitializeComponent();
	StartNewGame();
}

/*
Changes a button's color to the specified color

0 - Blank
1 - Blue
2 - Orange
*/
void connectfour::connectFourGUI::ChangeChipImage(System::Windows::Forms::Button^ b, int c)
{
	switch (c) {
	case 0:
		b->Image = chip_blank;
		break;
	case 1:
		b->Image = chip_blue;
		break;
	case 2:
		b->Image = chip_orange;
		break;
	}
	return System::Void();
}

/*
Appends the specified string to the GUI's console
*/
void connectfour::connectFourGUI::WriteToConsole(System::String^ s)
{
	this->gameConsole->AppendText(s + "\n");
	this->gameConsole->ScrollToCaret();
}

void connectfour::connectFourGUI::ToggleWinGameState(void)
{
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			buttonArray[i, j]->Enabled = false;
			buttonArray[i, j]->UseVisualStyleBackColor = true;
			//buttonArray[i, j]->ResetBackColor(); TODO
		}
	}
	if (flipChipValue == 1)
	{
		WriteToConsole("Blue wins!");
	}
	else if (flipChipValue == 2)
	{
		WriteToConsole("Orange wins!");
	}
}

/*
Starts a new game by resetting the board array and all buttons
*/
void connectfour::connectFourGUI::StartNewGame(void)
{
	WriteToConsole("Starting new game...");
	board->NewGame();
	FlipChip();
	// Set all buttons to grey
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			ChangeChipImage(buttonArray[i, j], 0);
			buttonArray[i, j]->Enabled = false;
			buttonArray[i, j]->UseVisualStyleBackColor = true;
			//buttonArray[i, j]->ResetBackColor(); TODO
		}
	}
	// Enable bottom row of buttons
	for (int i = 0; i < 7; i++) {
		buttonArray[5, i]->Enabled = true;
	}
}

/*
Flips who's turn it is and displays it to the console
*/
void connectfour::connectFourGUI::FlipChip(void)
{
	// is blue, flip to orange
	if (flipChipValue == 1)
	{
		flipChipValue = 2;
		WriteToConsole("It's orange's turn");
	}
	// is orange, flip to blue
	else if (flipChipValue == 2)
	{
		flipChipValue = 1;
		WriteToConsole("It's blue's turn");
	}
}

/*
Toggles button enabled/disabled (automatically does bounds checking)
*/
void connectfour::connectFourGUI::ToggleButtonEnabled(int x, int y)
{
	if ((x >= 0) & (x < 6) & (y >= 0) & (y < 7)) {
		if (buttonArray[x, y]->Enabled) {
			buttonArray[x, y]->Enabled = false;
			//buttonArray[x, y]->ResetBackColor(); TODO
		}
		else {
			buttonArray[x, y]->Enabled = true;
		}
	}
}

/*
Sequence of steps required for a button press. Called from buttons ALs.
*/
void connectfour::connectFourGUI::ButtonPress(int x, int y)
{
	// Add piece in logic module
	// Return location of button to enable and bool of win state
	std::pair<std::pair<int, int>, bool> retVal = board->AddPiece(x, y, flipChipValue);

	// Change image
	ChangeChipImage(buttonArray[x, y], flipChipValue);

	// Enable button above (if applicable)
	ToggleButtonEnabled(retVal.first.first, retVal.first.second);

	// Check for win
	if (retVal.second) {
		ToggleWinGameState();
	}
	else {
		FlipChip();
	}

	// Disable current button
	ToggleButtonEnabled(x, y);
}

/*
Destructor: Disposes of all GUI components
*/
connectfour::connectFourGUI::~connectFourGUI()
{
	if (components)
	{
		delete components;
	}
}


/*
Callback: Returns when GUI has been completely loaded
*/
System::Void connectfour::connectFourGUI::connectFourGUI_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

/*
Toggles debug mode
*/
System::Void connectfour::connectFourGUI::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->debugCheckbox->Checked) {
		useDebug = true;
	}
	else {
		useDebug = false;
	}
}

// --------------------------------------------------------------------------------------------------------
/*
Group: Passes x, y, and color into AddPiece methods
*/

System::Void connectfour::connectFourGUI::chip_00_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(0, 0);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_01_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(0, 1);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_02_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(0, 2);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_03_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(0, 3);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_04_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(0, 4);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_05_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(0, 5);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_06_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(0, 6);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_10_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(1, 0);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_11_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(1, 1);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_12_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(1, 2);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_13_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(1, 3);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_14_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(1, 4);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_15_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(1, 5);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_16_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(1, 6);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_20_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(2, 0);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_21_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(2, 1);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_22_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(2, 2);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_23_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(2, 3);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_24_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(2, 4);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_25_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(2, 5);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_26_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(2, 6);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_30_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(3, 0);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_31_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(3, 1);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_32_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(3, 2);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_33_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(3, 3);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_34_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(3, 4);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_35_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(3, 5);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_36_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(3, 6);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_40_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(4, 0);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_41_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(4, 1);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_42_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(4, 2);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_43_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(4, 3);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_44_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(4, 4);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_45_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(4, 5);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_46_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(4, 6);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_50_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(5, 0);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_51_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(5, 1);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_52_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(5, 2);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_53_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(5, 3);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_54_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(5, 4);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_55_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(5, 5);
	return System::Void();
}

System::Void connectfour::connectFourGUI::chip_56_Click(System::Object^ sender, System::EventArgs^ e)
{
	ButtonPress(5, 6);
	return System::Void();
}

/*
Starts a new game
*/
System::Void connectfour::connectFourGUI::newGameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	StartNewGame();
}

/*
Closes program
*/
System::Void connectfour::connectFourGUI::exitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	exit(0);
}
