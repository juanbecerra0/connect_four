#pragma once

#include "Board.h"
#include <string>
#include <array>
using namespace std;

namespace connectfour {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;

	public ref class connectFourGUI : public System::Windows::Forms::Form
	{
	public:
		connectfour::connectFourGUI::connectFourGUI(void);
		void ChangeChipImage(System::Windows::Forms::Button^ b, int c);
		void WriteToConsole(System::String^ s);
		void StartNewGame(void);
	private:
		Board^ board = gcnew Board();
		Image^ chip_blank = Image::FromFile("images/chip_blank.png");
		Image^ chip_blue = Image::FromFile("images/chip_blue.png");
		Image^ chip_orange = Image::FromFile("images/chip_orange.png");
		bool useDebug = false;
	protected:
		~connectFourGUI();
	private:
		// Table for buttons
		System::Windows::Forms::TableLayoutPanel^ grid_table;

		// Grid Container
		System::ComponentModel::Container^ components;

		// Row 6
		System::Windows::Forms::Button^ chip_56;
		System::Windows::Forms::Button^ chip_55;
		System::Windows::Forms::Button^ chip_54;
		System::Windows::Forms::Button^ chip_53;
		System::Windows::Forms::Button^ chip_52;
		System::Windows::Forms::Button^ chip_51;
		System::Windows::Forms::Button^ chip_50;

		// Row 4
		System::Windows::Forms::Button^ chip_46;
		System::Windows::Forms::Button^ chip_45;
		System::Windows::Forms::Button^ chip_44;
		System::Windows::Forms::Button^ chip_43;
		System::Windows::Forms::Button^ chip_42;
		System::Windows::Forms::Button^ chip_41;
		System::Windows::Forms::Button^ chip_40;

		// Row 3
		System::Windows::Forms::Button^ chip_36;
		System::Windows::Forms::Button^ chip_35;
		System::Windows::Forms::Button^ chip_34;
		System::Windows::Forms::Button^ chip_33;
		System::Windows::Forms::Button^ chip_32;
		System::Windows::Forms::Button^ chip_31;
		System::Windows::Forms::Button^ chip_30;

		// Row 2
		System::Windows::Forms::Button^ chip_26;
		System::Windows::Forms::Button^ chip_25;
		System::Windows::Forms::Button^ chip_24;
		System::Windows::Forms::Button^ chip_23;
		System::Windows::Forms::Button^ chip_22;
		System::Windows::Forms::Button^ chip_21;
		System::Windows::Forms::Button^ chip_20;

		// Row 1
		System::Windows::Forms::Button^ chip_16;
		System::Windows::Forms::Button^ chip_15;
		System::Windows::Forms::Button^ chip_14;
		System::Windows::Forms::Button^ chip_13;
		System::Windows::Forms::Button^ chip_12;
		System::Windows::Forms::Button^ chip_11;
		System::Windows::Forms::Button^ chip_10;

		// Row 0
		System::Windows::Forms::Button^ chip_06;
		System::Windows::Forms::Button^ chip_05;
		System::Windows::Forms::Button^ chip_04;
		System::Windows::Forms::Button^ chip_03;
		System::Windows::Forms::Button^ chip_02;
		System::Windows::Forms::Button^ chip_01;
		System::Windows::Forms::Button^ chip_00;

		// "Created by" label
		System::Windows::Forms::Label^ nameLabel;

		// Console
		System::Windows::Forms::RichTextBox^ gameConsole;

		// Buttons
		System::Windows::Forms::Button^ newGameButton;
		System::Windows::Forms::Button^ exitButton;
		System::Windows::Forms::CheckBox^ debugCheckbox;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grid_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->chip_56 = (gcnew System::Windows::Forms::Button());
			this->chip_55 = (gcnew System::Windows::Forms::Button());
			this->chip_54 = (gcnew System::Windows::Forms::Button());
			this->chip_53 = (gcnew System::Windows::Forms::Button());
			this->chip_52 = (gcnew System::Windows::Forms::Button());
			this->chip_51 = (gcnew System::Windows::Forms::Button());
			this->chip_50 = (gcnew System::Windows::Forms::Button());
			this->chip_46 = (gcnew System::Windows::Forms::Button());
			this->chip_45 = (gcnew System::Windows::Forms::Button());
			this->chip_44 = (gcnew System::Windows::Forms::Button());
			this->chip_43 = (gcnew System::Windows::Forms::Button());
			this->chip_42 = (gcnew System::Windows::Forms::Button());
			this->chip_41 = (gcnew System::Windows::Forms::Button());
			this->chip_40 = (gcnew System::Windows::Forms::Button());
			this->chip_36 = (gcnew System::Windows::Forms::Button());
			this->chip_35 = (gcnew System::Windows::Forms::Button());
			this->chip_34 = (gcnew System::Windows::Forms::Button());
			this->chip_33 = (gcnew System::Windows::Forms::Button());
			this->chip_32 = (gcnew System::Windows::Forms::Button());
			this->chip_31 = (gcnew System::Windows::Forms::Button());
			this->chip_30 = (gcnew System::Windows::Forms::Button());
			this->chip_26 = (gcnew System::Windows::Forms::Button());
			this->chip_25 = (gcnew System::Windows::Forms::Button());
			this->chip_24 = (gcnew System::Windows::Forms::Button());
			this->chip_23 = (gcnew System::Windows::Forms::Button());
			this->chip_22 = (gcnew System::Windows::Forms::Button());
			this->chip_21 = (gcnew System::Windows::Forms::Button());
			this->chip_20 = (gcnew System::Windows::Forms::Button());
			this->chip_16 = (gcnew System::Windows::Forms::Button());
			this->chip_15 = (gcnew System::Windows::Forms::Button());
			this->chip_14 = (gcnew System::Windows::Forms::Button());
			this->chip_13 = (gcnew System::Windows::Forms::Button());
			this->chip_12 = (gcnew System::Windows::Forms::Button());
			this->chip_11 = (gcnew System::Windows::Forms::Button());
			this->chip_10 = (gcnew System::Windows::Forms::Button());
			this->chip_06 = (gcnew System::Windows::Forms::Button());
			this->chip_05 = (gcnew System::Windows::Forms::Button());
			this->chip_04 = (gcnew System::Windows::Forms::Button());
			this->chip_03 = (gcnew System::Windows::Forms::Button());
			this->chip_02 = (gcnew System::Windows::Forms::Button());
			this->chip_01 = (gcnew System::Windows::Forms::Button());
			this->chip_00 = (gcnew System::Windows::Forms::Button());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->gameConsole = (gcnew System::Windows::Forms::RichTextBox());
			this->newGameButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->debugCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->grid_table->SuspendLayout();
			this->SuspendLayout();
			// 
			// grid_table
			// 
			this->grid_table->ColumnCount = 7;
			this->grid_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->grid_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28572F)));
			this->grid_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28572F)));
			this->grid_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28572F)));
			this->grid_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28572F)));
			this->grid_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28572F)));
			this->grid_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.28572F)));
			this->grid_table->Controls->Add(this->chip_56, 6, 5);
			this->grid_table->Controls->Add(this->chip_55, 5, 5);
			this->grid_table->Controls->Add(this->chip_54, 4, 5);
			this->grid_table->Controls->Add(this->chip_53, 3, 5);
			this->grid_table->Controls->Add(this->chip_52, 2, 5);
			this->grid_table->Controls->Add(this->chip_51, 1, 5);
			this->grid_table->Controls->Add(this->chip_50, 0, 5);
			this->grid_table->Controls->Add(this->chip_46, 6, 4);
			this->grid_table->Controls->Add(this->chip_45, 5, 4);
			this->grid_table->Controls->Add(this->chip_44, 4, 4);
			this->grid_table->Controls->Add(this->chip_43, 3, 4);
			this->grid_table->Controls->Add(this->chip_42, 2, 4);
			this->grid_table->Controls->Add(this->chip_41, 1, 4);
			this->grid_table->Controls->Add(this->chip_40, 0, 4);
			this->grid_table->Controls->Add(this->chip_36, 6, 3);
			this->grid_table->Controls->Add(this->chip_35, 5, 3);
			this->grid_table->Controls->Add(this->chip_34, 4, 3);
			this->grid_table->Controls->Add(this->chip_33, 3, 3);
			this->grid_table->Controls->Add(this->chip_32, 2, 3);
			this->grid_table->Controls->Add(this->chip_31, 1, 3);
			this->grid_table->Controls->Add(this->chip_30, 0, 3);
			this->grid_table->Controls->Add(this->chip_26, 6, 2);
			this->grid_table->Controls->Add(this->chip_25, 5, 2);
			this->grid_table->Controls->Add(this->chip_24, 4, 2);
			this->grid_table->Controls->Add(this->chip_23, 3, 2);
			this->grid_table->Controls->Add(this->chip_22, 2, 2);
			this->grid_table->Controls->Add(this->chip_21, 1, 2);
			this->grid_table->Controls->Add(this->chip_20, 0, 2);
			this->grid_table->Controls->Add(this->chip_16, 6, 1);
			this->grid_table->Controls->Add(this->chip_15, 5, 1);
			this->grid_table->Controls->Add(this->chip_14, 4, 1);
			this->grid_table->Controls->Add(this->chip_13, 3, 1);
			this->grid_table->Controls->Add(this->chip_12, 2, 1);
			this->grid_table->Controls->Add(this->chip_11, 1, 1);
			this->grid_table->Controls->Add(this->chip_10, 0, 1);
			this->grid_table->Controls->Add(this->chip_06, 6, 0);
			this->grid_table->Controls->Add(this->chip_05, 5, 0);
			this->grid_table->Controls->Add(this->chip_04, 4, 0);
			this->grid_table->Controls->Add(this->chip_03, 3, 0);
			this->grid_table->Controls->Add(this->chip_02, 2, 0);
			this->grid_table->Controls->Add(this->chip_01, 1, 0);
			this->grid_table->Controls->Add(this->chip_00, 0, 0);
			this->grid_table->Location = System::Drawing::Point(16, 15);
			this->grid_table->Margin = System::Windows::Forms::Padding(4);
			this->grid_table->Name = L"grid_table";
			this->grid_table->RowCount = 6;
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->Size = System::Drawing::Size(907, 630);
			this->grid_table->TabIndex = 0;
			// 
			// chip_56
			// 
			this->chip_56->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_56->Location = System::Drawing::Point(778, 524);
			this->chip_56->Margin = System::Windows::Forms::Padding(4);
			this->chip_56->Name = L"chip_56";
			this->chip_56->Size = System::Drawing::Size(121, 97);
			this->chip_56->TabIndex = 41;
			this->chip_56->UseVisualStyleBackColor = true;
			this->chip_56->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_56_Click);
			this->chip_56->Image = chip_blank;
			// 
			// chip_55
			// 
			this->chip_55->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_55->Location = System::Drawing::Point(649, 524);
			this->chip_55->Margin = System::Windows::Forms::Padding(4);
			this->chip_55->Name = L"chip_55";
			this->chip_55->Size = System::Drawing::Size(121, 97);
			this->chip_55->TabIndex = 40;
			this->chip_55->UseVisualStyleBackColor = true;
			this->chip_55->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_55_Click);
			this->chip_55->Image = chip_blank;
			// 
			// chip_54
			// 
			this->chip_54->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_54->Location = System::Drawing::Point(520, 524);
			this->chip_54->Margin = System::Windows::Forms::Padding(4);
			this->chip_54->Name = L"chip_54";
			this->chip_54->Size = System::Drawing::Size(121, 97);
			this->chip_54->TabIndex = 39;
			this->chip_54->UseVisualStyleBackColor = true;
			this->chip_54->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_54_Click);
			this->chip_54->Image = chip_blank;
			// 
			// chip_53
			// 
			this->chip_53->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_53->Location = System::Drawing::Point(391, 524);
			this->chip_53->Margin = System::Windows::Forms::Padding(4);
			this->chip_53->Name = L"chip_53";
			this->chip_53->Size = System::Drawing::Size(121, 97);
			this->chip_53->TabIndex = 38;
			this->chip_53->UseVisualStyleBackColor = true;
			this->chip_53->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_53_Click);
			this->chip_53->Image = chip_blank;
			// 
			// chip_52
			// 
			this->chip_52->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_52->Location = System::Drawing::Point(262, 524);
			this->chip_52->Margin = System::Windows::Forms::Padding(4);
			this->chip_52->Name = L"chip_52";
			this->chip_52->Size = System::Drawing::Size(121, 97);
			this->chip_52->TabIndex = 37;
			this->chip_52->UseVisualStyleBackColor = true;
			this->chip_52->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_52_Click);
			this->chip_52->Image = chip_blank;
			// 
			// chip_51
			// 
			this->chip_51->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_51->Location = System::Drawing::Point(133, 524);
			this->chip_51->Margin = System::Windows::Forms::Padding(4);
			this->chip_51->Name = L"chip_51";
			this->chip_51->Size = System::Drawing::Size(121, 97);
			this->chip_51->TabIndex = 36;
			this->chip_51->UseVisualStyleBackColor = true;
			this->chip_51->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_51_Click);
			this->chip_51->Image = chip_blank;
			// 
			// chip_50
			// 
			this->chip_50->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_50->Location = System::Drawing::Point(4, 524);
			this->chip_50->Margin = System::Windows::Forms::Padding(4);
			this->chip_50->Name = L"chip_50";
			this->chip_50->Size = System::Drawing::Size(121, 97);
			this->chip_50->TabIndex = 35;
			this->chip_50->UseVisualStyleBackColor = true;
			this->chip_50->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_50_Click);
			this->chip_50->Image = chip_blank;
			// 
			// chip_46
			// 
			this->chip_46->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_46->Location = System::Drawing::Point(778, 420);
			this->chip_46->Margin = System::Windows::Forms::Padding(4);
			this->chip_46->Name = L"chip_46";
			this->chip_46->Size = System::Drawing::Size(121, 96);
			this->chip_46->TabIndex = 34;
			this->chip_46->UseVisualStyleBackColor = true;
			this->chip_46->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_46_Click);
			this->chip_46->Image = chip_blank;
			// 
			// chip_45
			// 
			this->chip_45->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_45->Location = System::Drawing::Point(649, 420);
			this->chip_45->Margin = System::Windows::Forms::Padding(4);
			this->chip_45->Name = L"chip_45";
			this->chip_45->Size = System::Drawing::Size(121, 96);
			this->chip_45->TabIndex = 33;
			this->chip_45->UseVisualStyleBackColor = true;
			this->chip_45->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_45_Click);
			this->chip_45->Image = chip_blank;
			// 
			// chip_44
			// 
			this->chip_44->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_44->Location = System::Drawing::Point(520, 420);
			this->chip_44->Margin = System::Windows::Forms::Padding(4);
			this->chip_44->Name = L"chip_44";
			this->chip_44->Size = System::Drawing::Size(121, 96);
			this->chip_44->TabIndex = 32;
			this->chip_44->UseVisualStyleBackColor = true;
			this->chip_44->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_44_Click);
			this->chip_44->Image = chip_blank;
			// 
			// chip_43
			// 
			this->chip_43->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_43->Location = System::Drawing::Point(391, 420);
			this->chip_43->Margin = System::Windows::Forms::Padding(4);
			this->chip_43->Name = L"chip_43";
			this->chip_43->Size = System::Drawing::Size(121, 96);
			this->chip_43->TabIndex = 31;
			this->chip_43->UseVisualStyleBackColor = true;
			this->chip_43->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_43_Click);
			this->chip_43->Image = chip_blank;
			// 
			// chip_42
			// 
			this->chip_42->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_42->Location = System::Drawing::Point(262, 420);
			this->chip_42->Margin = System::Windows::Forms::Padding(4);
			this->chip_42->Name = L"chip_42";
			this->chip_42->Size = System::Drawing::Size(121, 96);
			this->chip_42->TabIndex = 30;
			this->chip_42->UseVisualStyleBackColor = true;
			this->chip_42->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_42_Click);
			this->chip_42->Image = chip_blank;
			// 
			// chip_41
			// 
			this->chip_41->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_41->Location = System::Drawing::Point(133, 420);
			this->chip_41->Margin = System::Windows::Forms::Padding(4);
			this->chip_41->Name = L"chip_41";
			this->chip_41->Size = System::Drawing::Size(121, 96);
			this->chip_41->TabIndex = 29;
			this->chip_41->UseVisualStyleBackColor = true;
			this->chip_41->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_41_Click);
			this->chip_41->Image = chip_blank;
			// 
			// chip_40
			// 
			this->chip_40->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_40->Location = System::Drawing::Point(4, 420);
			this->chip_40->Margin = System::Windows::Forms::Padding(4);
			this->chip_40->Name = L"chip_40";
			this->chip_40->Size = System::Drawing::Size(121, 96);
			this->chip_40->TabIndex = 28;
			this->chip_40->UseVisualStyleBackColor = true;
			this->chip_40->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_40_Click);
			this->chip_40->Image = chip_blank;
			// 
			// chip_36
			// 
			this->chip_36->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_36->Location = System::Drawing::Point(778, 316);
			this->chip_36->Margin = System::Windows::Forms::Padding(4);
			this->chip_36->Name = L"chip_36";
			this->chip_36->Size = System::Drawing::Size(121, 96);
			this->chip_36->TabIndex = 27;
			this->chip_36->UseVisualStyleBackColor = true;
			this->chip_36->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_36_Click);
			this->chip_36->Image = chip_blank;
			// 
			// chip_35
			// 
			this->chip_35->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_35->Location = System::Drawing::Point(649, 316);
			this->chip_35->Margin = System::Windows::Forms::Padding(4);
			this->chip_35->Name = L"chip_35";
			this->chip_35->Size = System::Drawing::Size(121, 96);
			this->chip_35->TabIndex = 26;
			this->chip_35->UseVisualStyleBackColor = true;
			this->chip_35->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_35_Click);
			this->chip_35->Image = chip_blank;
			// 
			// chip_34
			// 
			this->chip_34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_34->Location = System::Drawing::Point(520, 316);
			this->chip_34->Margin = System::Windows::Forms::Padding(4);
			this->chip_34->Name = L"chip_34";
			this->chip_34->Size = System::Drawing::Size(121, 96);
			this->chip_34->TabIndex = 25;
			this->chip_34->UseVisualStyleBackColor = true;
			this->chip_34->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_34_Click);
			this->chip_34->Image = chip_blank;
			// 
			// chip_33
			// 
			this->chip_33->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_33->Location = System::Drawing::Point(391, 316);
			this->chip_33->Margin = System::Windows::Forms::Padding(4);
			this->chip_33->Name = L"chip_33";
			this->chip_33->Size = System::Drawing::Size(121, 96);
			this->chip_33->TabIndex = 24;
			this->chip_33->UseVisualStyleBackColor = true;
			this->chip_33->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_33_Click);
			this->chip_33->Image = chip_blank;
			// 
			// chip_32
			// 
			this->chip_32->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_32->Location = System::Drawing::Point(262, 316);
			this->chip_32->Margin = System::Windows::Forms::Padding(4);
			this->chip_32->Name = L"chip_32";
			this->chip_32->Size = System::Drawing::Size(121, 96);
			this->chip_32->TabIndex = 23;
			this->chip_32->UseVisualStyleBackColor = true;
			this->chip_32->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_32_Click);
			this->chip_32->Image = chip_blank;
			// 
			// chip_31
			// 
			this->chip_31->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_31->Location = System::Drawing::Point(133, 316);
			this->chip_31->Margin = System::Windows::Forms::Padding(4);
			this->chip_31->Name = L"chip_31";
			this->chip_31->Size = System::Drawing::Size(121, 96);
			this->chip_31->TabIndex = 22;
			this->chip_31->UseVisualStyleBackColor = true;
			this->chip_31->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_31_Click);
			this->chip_31->Image = chip_blank;
			// 
			// chip_30
			// 
			this->chip_30->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_30->Location = System::Drawing::Point(4, 316);
			this->chip_30->Margin = System::Windows::Forms::Padding(4);
			this->chip_30->Name = L"chip_30";
			this->chip_30->Size = System::Drawing::Size(121, 96);
			this->chip_30->TabIndex = 21;
			this->chip_30->UseVisualStyleBackColor = true;
			this->chip_30->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_30_Click);
			this->chip_30->Image = chip_blank;
			// 
			// chip_26
			// 
			this->chip_26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_26->Location = System::Drawing::Point(778, 212);
			this->chip_26->Margin = System::Windows::Forms::Padding(4);
			this->chip_26->Name = L"chip_26";
			this->chip_26->Size = System::Drawing::Size(121, 96);
			this->chip_26->TabIndex = 20;
			this->chip_26->UseVisualStyleBackColor = true;
			this->chip_26->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_26_Click);
			this->chip_26->Image = chip_blank;
			// 
			// chip_25
			// 
			this->chip_25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_25->Location = System::Drawing::Point(649, 212);
			this->chip_25->Margin = System::Windows::Forms::Padding(4);
			this->chip_25->Name = L"chip_25";
			this->chip_25->Size = System::Drawing::Size(121, 96);
			this->chip_25->TabIndex = 19;
			this->chip_25->UseVisualStyleBackColor = true;
			this->chip_25->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_25_Click);
			this->chip_25->Image = chip_blank;
			// 
			// chip_24
			// 
			this->chip_24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_24->Location = System::Drawing::Point(520, 212);
			this->chip_24->Margin = System::Windows::Forms::Padding(4);
			this->chip_24->Name = L"chip_24";
			this->chip_24->Size = System::Drawing::Size(121, 96);
			this->chip_24->TabIndex = 18;
			this->chip_24->UseVisualStyleBackColor = true;
			this->chip_24->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_24_Click);
			this->chip_24->Image = chip_blank;
			// 
			// chip_23
			// 
			this->chip_23->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_23->Location = System::Drawing::Point(391, 212);
			this->chip_23->Margin = System::Windows::Forms::Padding(4);
			this->chip_23->Name = L"chip_23";
			this->chip_23->Size = System::Drawing::Size(121, 96);
			this->chip_23->TabIndex = 17;
			this->chip_23->UseVisualStyleBackColor = true;
			this->chip_23->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_23_Click);
			this->chip_23->Image = chip_blank;
			// 
			// chip_22
			// 
			this->chip_22->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_22->Location = System::Drawing::Point(262, 212);
			this->chip_22->Margin = System::Windows::Forms::Padding(4);
			this->chip_22->Name = L"chip_22";
			this->chip_22->Size = System::Drawing::Size(121, 96);
			this->chip_22->TabIndex = 16;
			this->chip_22->UseVisualStyleBackColor = true;
			this->chip_22->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_22_Click);
			this->chip_22->Image = chip_blank;
			// 
			// chip_21
			// 
			this->chip_21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_21->Location = System::Drawing::Point(133, 212);
			this->chip_21->Margin = System::Windows::Forms::Padding(4);
			this->chip_21->Name = L"chip_21";
			this->chip_21->Size = System::Drawing::Size(121, 96);
			this->chip_21->TabIndex = 15;
			this->chip_21->UseVisualStyleBackColor = true;
			this->chip_21->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_21_Click);
			this->chip_21->Image = chip_blank;
			// 
			// chip_20
			// 
			this->chip_20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_20->Location = System::Drawing::Point(4, 212);
			this->chip_20->Margin = System::Windows::Forms::Padding(4);
			this->chip_20->Name = L"chip_20";
			this->chip_20->Size = System::Drawing::Size(121, 96);
			this->chip_20->TabIndex = 14;
			this->chip_20->UseVisualStyleBackColor = true;
			this->chip_20->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_20_Click);
			this->chip_20->Image = chip_blank;
			// 
			// chip_16
			// 
			this->chip_16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_16->Location = System::Drawing::Point(778, 108);
			this->chip_16->Margin = System::Windows::Forms::Padding(4);
			this->chip_16->Name = L"chip_16";
			this->chip_16->Size = System::Drawing::Size(121, 96);
			this->chip_16->TabIndex = 13;
			this->chip_16->UseVisualStyleBackColor = true;
			this->chip_16->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_16_Click);
			this->chip_16->Image = chip_blank;
			// 
			// chip_15
			// 
			this->chip_15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_15->Location = System::Drawing::Point(649, 108);
			this->chip_15->Margin = System::Windows::Forms::Padding(4);
			this->chip_15->Name = L"chip_15";
			this->chip_15->Size = System::Drawing::Size(121, 96);
			this->chip_15->TabIndex = 12;
			this->chip_15->UseVisualStyleBackColor = true;
			this->chip_15->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_15_Click);
			this->chip_15->Image = chip_blank;
			// 
			// chip_14
			// 
			this->chip_14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_14->Location = System::Drawing::Point(520, 108);
			this->chip_14->Margin = System::Windows::Forms::Padding(4);
			this->chip_14->Name = L"chip_14";
			this->chip_14->Size = System::Drawing::Size(121, 96);
			this->chip_14->TabIndex = 11;
			this->chip_14->UseVisualStyleBackColor = true;
			this->chip_14->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_14_Click);
			this->chip_14->Image = chip_blank;
			// 
			// chip_13
			// 
			this->chip_13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_13->Location = System::Drawing::Point(391, 108);
			this->chip_13->Margin = System::Windows::Forms::Padding(4);
			this->chip_13->Name = L"chip_13";
			this->chip_13->Size = System::Drawing::Size(121, 96);
			this->chip_13->TabIndex = 10;
			this->chip_13->UseVisualStyleBackColor = true;
			this->chip_13->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_13_Click);
			this->chip_13->Image = chip_blank;
			// 
			// chip_12
			// 
			this->chip_12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_12->Location = System::Drawing::Point(262, 108);
			this->chip_12->Margin = System::Windows::Forms::Padding(4);
			this->chip_12->Name = L"chip_12";
			this->chip_12->Size = System::Drawing::Size(121, 96);
			this->chip_12->TabIndex = 9;
			this->chip_12->UseVisualStyleBackColor = true;
			this->chip_12->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_12_Click);
			this->chip_12->Image = chip_blank;
			// 
			// chip_11
			// 
			this->chip_11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_11->Location = System::Drawing::Point(133, 108);
			this->chip_11->Margin = System::Windows::Forms::Padding(4);
			this->chip_11->Name = L"chip_11";
			this->chip_11->Size = System::Drawing::Size(121, 96);
			this->chip_11->TabIndex = 8;
			this->chip_11->UseVisualStyleBackColor = true;
			this->chip_11->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_11_Click);
			this->chip_11->Image = chip_blank;
			// 
			// chip_10
			// 
			this->chip_10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_10->Location = System::Drawing::Point(4, 108);
			this->chip_10->Margin = System::Windows::Forms::Padding(4);
			this->chip_10->Name = L"chip_10";
			this->chip_10->Size = System::Drawing::Size(121, 96);
			this->chip_10->TabIndex = 7;
			this->chip_10->UseVisualStyleBackColor = true;
			this->chip_10->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_10_Click);
			this->chip_10->Image = chip_blank;
			// 
			// chip_06
			// 
			this->chip_06->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_06->Location = System::Drawing::Point(778, 4);
			this->chip_06->Margin = System::Windows::Forms::Padding(4);
			this->chip_06->Name = L"chip_06";
			this->chip_06->Size = System::Drawing::Size(121, 96);
			this->chip_06->TabIndex = 6;
			this->chip_06->UseVisualStyleBackColor = true;
			this->chip_06->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_06_Click);
			this->chip_06->Image = chip_blank;
			// 
			// chip_05
			// 
			this->chip_05->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_05->Location = System::Drawing::Point(649, 4);
			this->chip_05->Margin = System::Windows::Forms::Padding(4);
			this->chip_05->Name = L"chip_05";
			this->chip_05->Size = System::Drawing::Size(121, 96);
			this->chip_05->TabIndex = 5;
			this->chip_05->UseVisualStyleBackColor = true;
			this->chip_05->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_05_Click);
			this->chip_05->Image = chip_blank;
			// 
			// chip_04
			// 
			this->chip_04->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_04->Location = System::Drawing::Point(520, 4);
			this->chip_04->Margin = System::Windows::Forms::Padding(4);
			this->chip_04->Name = L"chip_04";
			this->chip_04->Size = System::Drawing::Size(121, 96);
			this->chip_04->TabIndex = 4;
			this->chip_04->UseVisualStyleBackColor = true;
			this->chip_04->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_04_Click);
			this->chip_04->Image = chip_blank;
			// 
			// chip_03
			// 
			this->chip_03->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_03->Location = System::Drawing::Point(391, 4);
			this->chip_03->Margin = System::Windows::Forms::Padding(4);
			this->chip_03->Name = L"chip_03";
			this->chip_03->Size = System::Drawing::Size(121, 96);
			this->chip_03->TabIndex = 3;
			this->chip_03->UseVisualStyleBackColor = true;
			this->chip_03->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_03_Click);
			this->chip_03->Image = chip_blank;
			// 
			// chip_02
			// 
			this->chip_02->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_02->Location = System::Drawing::Point(262, 4);
			this->chip_02->Margin = System::Windows::Forms::Padding(4);
			this->chip_02->Name = L"chip_02";
			this->chip_02->Size = System::Drawing::Size(121, 96);
			this->chip_02->TabIndex = 2;
			this->chip_02->UseVisualStyleBackColor = true;
			this->chip_02->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_02_Click);
			this->chip_02->Image = chip_blank;
			// 
			// chip_01
			// 
			this->chip_01->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_01->Location = System::Drawing::Point(133, 4);
			this->chip_01->Margin = System::Windows::Forms::Padding(4);
			this->chip_01->Name = L"chip_01";
			this->chip_01->Size = System::Drawing::Size(121, 96);
			this->chip_01->TabIndex = 1;
			this->chip_01->UseVisualStyleBackColor = true;
			this->chip_01->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_01_Click);
			this->chip_01->Image = chip_blank;
			// 
			// chip_00
			// 
			this->chip_00->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_00->Location = System::Drawing::Point(4, 4);
			this->chip_00->Margin = System::Windows::Forms::Padding(4);
			this->chip_00->Name = L"chip_00";
			this->chip_00->Size = System::Drawing::Size(121, 96);
			this->chip_00->TabIndex = 0;
			this->chip_00->UseVisualStyleBackColor = true;
			this->chip_00->Click += gcnew System::EventHandler(this, &connectFourGUI::chip_00_Click);
			this->chip_00->Image = chip_blank;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nameLabel->Location = System::Drawing::Point(275, 820);
			this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(383, 17);
			this->nameLabel->TabIndex = 1;
			this->nameLabel->Text = L"  Created by Juan Becerra (juanbecerra@u.boisestate.edu)";
			// 
			// gameConsole
			// 
			this->gameConsole->Cursor = System::Windows::Forms::Cursors::Default;
			this->gameConsole->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gameConsole->Location = System::Drawing::Point(20, 654);
			this->gameConsole->Margin = System::Windows::Forms::Padding(4);
			this->gameConsole->Name = L"gameConsole";
			this->gameConsole->ReadOnly = true;
			this->gameConsole->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->gameConsole->Size = System::Drawing::Size(767, 162);
			this->gameConsole->TabIndex = 2;
			this->gameConsole->Text = L"";
			// 
			// newGameButton
			// 
			this->newGameButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->newGameButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newGameButton->Location = System::Drawing::Point(796, 654);
			this->newGameButton->Margin = System::Windows::Forms::Padding(4);
			this->newGameButton->Name = L"newGameButton";
			this->newGameButton->Size = System::Drawing::Size(121, 49);
			this->newGameButton->TabIndex = 3;
			this->newGameButton->Text = L"New Game";
			this->newGameButton->UseVisualStyleBackColor = false;
			this->newGameButton->Click += gcnew System::EventHandler(this, &connectFourGUI::newGameButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->exitButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exitButton->Location = System::Drawing::Point(796, 710);
			this->exitButton->Margin = System::Windows::Forms::Padding(4);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(121, 49);
			this->exitButton->TabIndex = 4;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &connectFourGUI::exitButton_Click);
			// 
			// debugCheckbox
			// 
			this->debugCheckbox->AutoSize = true;
			this->debugCheckbox->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->debugCheckbox->Location = System::Drawing::Point(796, 779);
			this->debugCheckbox->Margin = System::Windows::Forms::Padding(4);
			this->debugCheckbox->Name = L"debugCheckbox";
			this->debugCheckbox->Size = System::Drawing::Size(111, 21);
			this->debugCheckbox->TabIndex = 5;
			this->debugCheckbox->Text = L"Debug Mode";
			this->debugCheckbox->UseVisualStyleBackColor = true;
			this->debugCheckbox->CheckedChanged += gcnew System::EventHandler(this, &connectFourGUI::checkBox1_CheckedChanged);
			// 
			// connectFourGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(939, 838);
			this->Controls->Add(this->debugCheckbox);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->newGameButton);
			this->Controls->Add(this->gameConsole);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->grid_table);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"connectFourGUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Connect Four";
			this->Load += gcnew System::EventHandler(this, &connectFourGUI::connectFourGUI_Load);
			this->grid_table->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		// Action listeners
		System::Void connectFourGUI_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

		System::Void chip_00_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_01_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_02_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_03_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_04_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_05_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_06_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_10_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_11_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_12_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_13_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_14_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_15_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_16_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_20_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_21_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_22_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_23_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_24_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_25_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_26_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_30_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_31_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_32_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_33_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_34_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_35_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_36_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_40_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_41_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_42_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_43_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_44_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_45_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_46_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_50_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_51_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_52_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_53_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_54_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_55_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void chip_56_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void newGameButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
