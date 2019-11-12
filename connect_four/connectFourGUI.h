#pragma once

namespace connectfour {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for connectFourGUI
	/// </summary>
	public ref class connectFourGUI : public System::Windows::Forms::Form
	{
	public:
		connectFourGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~connectFourGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ grid_table;
	private: System::Windows::Forms::Button^ chip_00;
	private: System::Windows::Forms::Button^ chip_56;

	private: System::Windows::Forms::Button^ chip_55;

	private: System::Windows::Forms::Button^ chip_54;

	private: System::Windows::Forms::Button^ chip_53;

	private: System::Windows::Forms::Button^ chip_52;

	private: System::Windows::Forms::Button^ chip_51;

	private: System::Windows::Forms::Button^ chip_50;

	private: System::Windows::Forms::Button^ chip_46;

	private: System::Windows::Forms::Button^ chip_45;

	private: System::Windows::Forms::Button^ chip_44;

	private: System::Windows::Forms::Button^ chip_43;

	private: System::Windows::Forms::Button^ chip_42;

	private: System::Windows::Forms::Button^ chip_41;

	private: System::Windows::Forms::Button^ chip_40;

	private: System::Windows::Forms::Button^ chip_36;

	private: System::Windows::Forms::Button^ chip_35;

	private: System::Windows::Forms::Button^ chip_34;

	private: System::Windows::Forms::Button^ chip_33;

	private: System::Windows::Forms::Button^ chip_32;

	private: System::Windows::Forms::Button^ chip_31;

	private: System::Windows::Forms::Button^ chip_30;

	private: System::Windows::Forms::Button^ chip_26;

	private: System::Windows::Forms::Button^ chip_25;

	private: System::Windows::Forms::Button^ chip_24;

	private: System::Windows::Forms::Button^ chip_23;

	private: System::Windows::Forms::Button^ chip_22;

	private: System::Windows::Forms::Button^ chip_21;

	private: System::Windows::Forms::Button^ chip_20;

	private: System::Windows::Forms::Button^ chip_16;

	private: System::Windows::Forms::Button^ chip_15;

	private: System::Windows::Forms::Button^ chip_14;

	private: System::Windows::Forms::Button^ chip_13;

	private: System::Windows::Forms::Button^ chip_12;

	private: System::Windows::Forms::Button^ chip_11;

	private: System::Windows::Forms::Button^ chip_10;

	private: System::Windows::Forms::Button^ chip_06;

	private: System::Windows::Forms::Button^ chip_05;

	private: System::Windows::Forms::Button^ chip_04;

	private: System::Windows::Forms::Button^ chip_03;

	private: System::Windows::Forms::Button^ chip_02;

	private: System::Windows::Forms::Button^ chip_01;
private: System::Windows::Forms::Label^ nameLabel;
private: System::Windows::Forms::RichTextBox^ gameConsole;


private: System::Windows::Forms::Button^ newGameButton;















































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(connectFourGUI::typeid));
			this->grid_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->chip_00 = (gcnew System::Windows::Forms::Button());
			this->chip_01 = (gcnew System::Windows::Forms::Button());
			this->chip_02 = (gcnew System::Windows::Forms::Button());
			this->chip_03 = (gcnew System::Windows::Forms::Button());
			this->chip_04 = (gcnew System::Windows::Forms::Button());
			this->chip_05 = (gcnew System::Windows::Forms::Button());
			this->chip_06 = (gcnew System::Windows::Forms::Button());
			this->chip_10 = (gcnew System::Windows::Forms::Button());
			this->chip_11 = (gcnew System::Windows::Forms::Button());
			this->chip_12 = (gcnew System::Windows::Forms::Button());
			this->chip_13 = (gcnew System::Windows::Forms::Button());
			this->chip_14 = (gcnew System::Windows::Forms::Button());
			this->chip_15 = (gcnew System::Windows::Forms::Button());
			this->chip_16 = (gcnew System::Windows::Forms::Button());
			this->chip_20 = (gcnew System::Windows::Forms::Button());
			this->chip_21 = (gcnew System::Windows::Forms::Button());
			this->chip_22 = (gcnew System::Windows::Forms::Button());
			this->chip_23 = (gcnew System::Windows::Forms::Button());
			this->chip_24 = (gcnew System::Windows::Forms::Button());
			this->chip_25 = (gcnew System::Windows::Forms::Button());
			this->chip_26 = (gcnew System::Windows::Forms::Button());
			this->chip_30 = (gcnew System::Windows::Forms::Button());
			this->chip_31 = (gcnew System::Windows::Forms::Button());
			this->chip_32 = (gcnew System::Windows::Forms::Button());
			this->chip_33 = (gcnew System::Windows::Forms::Button());
			this->chip_34 = (gcnew System::Windows::Forms::Button());
			this->chip_35 = (gcnew System::Windows::Forms::Button());
			this->chip_36 = (gcnew System::Windows::Forms::Button());
			this->chip_40 = (gcnew System::Windows::Forms::Button());
			this->chip_41 = (gcnew System::Windows::Forms::Button());
			this->chip_42 = (gcnew System::Windows::Forms::Button());
			this->chip_43 = (gcnew System::Windows::Forms::Button());
			this->chip_44 = (gcnew System::Windows::Forms::Button());
			this->chip_45 = (gcnew System::Windows::Forms::Button());
			this->chip_46 = (gcnew System::Windows::Forms::Button());
			this->chip_50 = (gcnew System::Windows::Forms::Button());
			this->chip_51 = (gcnew System::Windows::Forms::Button());
			this->chip_52 = (gcnew System::Windows::Forms::Button());
			this->chip_53 = (gcnew System::Windows::Forms::Button());
			this->chip_54 = (gcnew System::Windows::Forms::Button());
			this->chip_55 = (gcnew System::Windows::Forms::Button());
			this->chip_56 = (gcnew System::Windows::Forms::Button());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->gameConsole = (gcnew System::Windows::Forms::RichTextBox());
			this->newGameButton = (gcnew System::Windows::Forms::Button());
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
			this->grid_table->Location = System::Drawing::Point(12, 12);
			this->grid_table->Name = L"grid_table";
			this->grid_table->RowCount = 6;
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->grid_table->Size = System::Drawing::Size(680, 512);
			this->grid_table->TabIndex = 0;
			// 
			// chip_00
			// 
			this->chip_00->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_00->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_00.Image")));
			this->chip_00->Location = System::Drawing::Point(3, 3);
			this->chip_00->Name = L"chip_00";
			this->chip_00->Size = System::Drawing::Size(91, 79);
			this->chip_00->TabIndex = 0;
			this->chip_00->UseVisualStyleBackColor = true;
			// 
			// chip_01
			// 
			this->chip_01->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_01->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_01.Image")));
			this->chip_01->Location = System::Drawing::Point(100, 3);
			this->chip_01->Name = L"chip_01";
			this->chip_01->Size = System::Drawing::Size(91, 79);
			this->chip_01->TabIndex = 1;
			this->chip_01->UseVisualStyleBackColor = true;
			// 
			// chip_02
			// 
			this->chip_02->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_02->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_02.Image")));
			this->chip_02->Location = System::Drawing::Point(197, 3);
			this->chip_02->Name = L"chip_02";
			this->chip_02->Size = System::Drawing::Size(91, 79);
			this->chip_02->TabIndex = 2;
			this->chip_02->UseVisualStyleBackColor = true;
			// 
			// chip_03
			// 
			this->chip_03->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_03->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_03.Image")));
			this->chip_03->Location = System::Drawing::Point(294, 3);
			this->chip_03->Name = L"chip_03";
			this->chip_03->Size = System::Drawing::Size(91, 79);
			this->chip_03->TabIndex = 3;
			this->chip_03->UseVisualStyleBackColor = true;
			// 
			// chip_04
			// 
			this->chip_04->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_04->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_04.Image")));
			this->chip_04->Location = System::Drawing::Point(391, 3);
			this->chip_04->Name = L"chip_04";
			this->chip_04->Size = System::Drawing::Size(91, 79);
			this->chip_04->TabIndex = 4;
			this->chip_04->UseVisualStyleBackColor = true;
			// 
			// chip_05
			// 
			this->chip_05->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_05->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_05.Image")));
			this->chip_05->Location = System::Drawing::Point(488, 3);
			this->chip_05->Name = L"chip_05";
			this->chip_05->Size = System::Drawing::Size(91, 79);
			this->chip_05->TabIndex = 5;
			this->chip_05->UseVisualStyleBackColor = true;
			// 
			// chip_06
			// 
			this->chip_06->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_06->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_06.Image")));
			this->chip_06->Location = System::Drawing::Point(585, 3);
			this->chip_06->Name = L"chip_06";
			this->chip_06->Size = System::Drawing::Size(91, 79);
			this->chip_06->TabIndex = 6;
			this->chip_06->UseVisualStyleBackColor = true;
			// 
			// chip_10
			// 
			this->chip_10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_10.Image")));
			this->chip_10->Location = System::Drawing::Point(3, 88);
			this->chip_10->Name = L"chip_10";
			this->chip_10->Size = System::Drawing::Size(91, 79);
			this->chip_10->TabIndex = 7;
			this->chip_10->UseVisualStyleBackColor = true;
			// 
			// chip_11
			// 
			this->chip_11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_11.Image")));
			this->chip_11->Location = System::Drawing::Point(100, 88);
			this->chip_11->Name = L"chip_11";
			this->chip_11->Size = System::Drawing::Size(91, 79);
			this->chip_11->TabIndex = 8;
			this->chip_11->UseVisualStyleBackColor = true;
			// 
			// chip_12
			// 
			this->chip_12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_12.Image")));
			this->chip_12->Location = System::Drawing::Point(197, 88);
			this->chip_12->Name = L"chip_12";
			this->chip_12->Size = System::Drawing::Size(91, 79);
			this->chip_12->TabIndex = 9;
			this->chip_12->UseVisualStyleBackColor = true;
			// 
			// chip_13
			// 
			this->chip_13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_13.Image")));
			this->chip_13->Location = System::Drawing::Point(294, 88);
			this->chip_13->Name = L"chip_13";
			this->chip_13->Size = System::Drawing::Size(91, 79);
			this->chip_13->TabIndex = 10;
			this->chip_13->UseVisualStyleBackColor = true;
			// 
			// chip_14
			// 
			this->chip_14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_14.Image")));
			this->chip_14->Location = System::Drawing::Point(391, 88);
			this->chip_14->Name = L"chip_14";
			this->chip_14->Size = System::Drawing::Size(91, 79);
			this->chip_14->TabIndex = 11;
			this->chip_14->UseVisualStyleBackColor = true;
			// 
			// chip_15
			// 
			this->chip_15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_15.Image")));
			this->chip_15->Location = System::Drawing::Point(488, 88);
			this->chip_15->Name = L"chip_15";
			this->chip_15->Size = System::Drawing::Size(91, 79);
			this->chip_15->TabIndex = 12;
			this->chip_15->UseVisualStyleBackColor = true;
			// 
			// chip_16
			// 
			this->chip_16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_16.Image")));
			this->chip_16->Location = System::Drawing::Point(585, 88);
			this->chip_16->Name = L"chip_16";
			this->chip_16->Size = System::Drawing::Size(91, 79);
			this->chip_16->TabIndex = 13;
			this->chip_16->UseVisualStyleBackColor = true;
			// 
			// chip_20
			// 
			this->chip_20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_20.Image")));
			this->chip_20->Location = System::Drawing::Point(3, 173);
			this->chip_20->Name = L"chip_20";
			this->chip_20->Size = System::Drawing::Size(91, 79);
			this->chip_20->TabIndex = 14;
			this->chip_20->UseVisualStyleBackColor = true;
			// 
			// chip_21
			// 
			this->chip_21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_21.Image")));
			this->chip_21->Location = System::Drawing::Point(100, 173);
			this->chip_21->Name = L"chip_21";
			this->chip_21->Size = System::Drawing::Size(91, 79);
			this->chip_21->TabIndex = 15;
			this->chip_21->UseVisualStyleBackColor = true;
			// 
			// chip_22
			// 
			this->chip_22->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_22.Image")));
			this->chip_22->Location = System::Drawing::Point(197, 173);
			this->chip_22->Name = L"chip_22";
			this->chip_22->Size = System::Drawing::Size(91, 79);
			this->chip_22->TabIndex = 16;
			this->chip_22->UseVisualStyleBackColor = true;
			// 
			// chip_23
			// 
			this->chip_23->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_23.Image")));
			this->chip_23->Location = System::Drawing::Point(294, 173);
			this->chip_23->Name = L"chip_23";
			this->chip_23->Size = System::Drawing::Size(91, 79);
			this->chip_23->TabIndex = 17;
			this->chip_23->UseVisualStyleBackColor = true;
			// 
			// chip_24
			// 
			this->chip_24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_24.Image")));
			this->chip_24->Location = System::Drawing::Point(391, 173);
			this->chip_24->Name = L"chip_24";
			this->chip_24->Size = System::Drawing::Size(91, 79);
			this->chip_24->TabIndex = 18;
			this->chip_24->UseVisualStyleBackColor = true;
			// 
			// chip_25
			// 
			this->chip_25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_25.Image")));
			this->chip_25->Location = System::Drawing::Point(488, 173);
			this->chip_25->Name = L"chip_25";
			this->chip_25->Size = System::Drawing::Size(91, 79);
			this->chip_25->TabIndex = 19;
			this->chip_25->UseVisualStyleBackColor = true;
			// 
			// chip_26
			// 
			this->chip_26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_26.Image")));
			this->chip_26->Location = System::Drawing::Point(585, 173);
			this->chip_26->Name = L"chip_26";
			this->chip_26->Size = System::Drawing::Size(91, 79);
			this->chip_26->TabIndex = 20;
			this->chip_26->UseVisualStyleBackColor = true;
			// 
			// chip_30
			// 
			this->chip_30->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_30.Image")));
			this->chip_30->Location = System::Drawing::Point(3, 258);
			this->chip_30->Name = L"chip_30";
			this->chip_30->Size = System::Drawing::Size(91, 79);
			this->chip_30->TabIndex = 21;
			this->chip_30->UseVisualStyleBackColor = true;
			// 
			// chip_31
			// 
			this->chip_31->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_31.Image")));
			this->chip_31->Location = System::Drawing::Point(100, 258);
			this->chip_31->Name = L"chip_31";
			this->chip_31->Size = System::Drawing::Size(91, 79);
			this->chip_31->TabIndex = 22;
			this->chip_31->UseVisualStyleBackColor = true;
			// 
			// chip_32
			// 
			this->chip_32->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_32.Image")));
			this->chip_32->Location = System::Drawing::Point(197, 258);
			this->chip_32->Name = L"chip_32";
			this->chip_32->Size = System::Drawing::Size(91, 79);
			this->chip_32->TabIndex = 23;
			this->chip_32->UseVisualStyleBackColor = true;
			// 
			// chip_33
			// 
			this->chip_33->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_33.Image")));
			this->chip_33->Location = System::Drawing::Point(294, 258);
			this->chip_33->Name = L"chip_33";
			this->chip_33->Size = System::Drawing::Size(91, 79);
			this->chip_33->TabIndex = 24;
			this->chip_33->UseVisualStyleBackColor = true;
			// 
			// chip_34
			// 
			this->chip_34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_34.Image")));
			this->chip_34->Location = System::Drawing::Point(391, 258);
			this->chip_34->Name = L"chip_34";
			this->chip_34->Size = System::Drawing::Size(91, 79);
			this->chip_34->TabIndex = 25;
			this->chip_34->UseVisualStyleBackColor = true;
			// 
			// chip_35
			// 
			this->chip_35->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_35.Image")));
			this->chip_35->Location = System::Drawing::Point(488, 258);
			this->chip_35->Name = L"chip_35";
			this->chip_35->Size = System::Drawing::Size(91, 79);
			this->chip_35->TabIndex = 26;
			this->chip_35->UseVisualStyleBackColor = true;
			// 
			// chip_36
			// 
			this->chip_36->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_36.Image")));
			this->chip_36->Location = System::Drawing::Point(585, 258);
			this->chip_36->Name = L"chip_36";
			this->chip_36->Size = System::Drawing::Size(91, 79);
			this->chip_36->TabIndex = 27;
			this->chip_36->UseVisualStyleBackColor = true;
			// 
			// chip_40
			// 
			this->chip_40->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_40.Image")));
			this->chip_40->Location = System::Drawing::Point(3, 343);
			this->chip_40->Name = L"chip_40";
			this->chip_40->Size = System::Drawing::Size(91, 79);
			this->chip_40->TabIndex = 28;
			this->chip_40->UseVisualStyleBackColor = true;
			// 
			// chip_41
			// 
			this->chip_41->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_41.Image")));
			this->chip_41->Location = System::Drawing::Point(100, 343);
			this->chip_41->Name = L"chip_41";
			this->chip_41->Size = System::Drawing::Size(91, 79);
			this->chip_41->TabIndex = 29;
			this->chip_41->UseVisualStyleBackColor = true;
			// 
			// chip_42
			// 
			this->chip_42->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_42.Image")));
			this->chip_42->Location = System::Drawing::Point(197, 343);
			this->chip_42->Name = L"chip_42";
			this->chip_42->Size = System::Drawing::Size(91, 79);
			this->chip_42->TabIndex = 30;
			this->chip_42->UseVisualStyleBackColor = true;
			// 
			// chip_43
			// 
			this->chip_43->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_43.Image")));
			this->chip_43->Location = System::Drawing::Point(294, 343);
			this->chip_43->Name = L"chip_43";
			this->chip_43->Size = System::Drawing::Size(91, 79);
			this->chip_43->TabIndex = 31;
			this->chip_43->UseVisualStyleBackColor = true;
			// 
			// chip_44
			// 
			this->chip_44->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_44.Image")));
			this->chip_44->Location = System::Drawing::Point(391, 343);
			this->chip_44->Name = L"chip_44";
			this->chip_44->Size = System::Drawing::Size(91, 79);
			this->chip_44->TabIndex = 32;
			this->chip_44->UseVisualStyleBackColor = true;
			// 
			// chip_45
			// 
			this->chip_45->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_45.Image")));
			this->chip_45->Location = System::Drawing::Point(488, 343);
			this->chip_45->Name = L"chip_45";
			this->chip_45->Size = System::Drawing::Size(91, 79);
			this->chip_45->TabIndex = 33;
			this->chip_45->UseVisualStyleBackColor = true;
			// 
			// chip_46
			// 
			this->chip_46->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_46.Image")));
			this->chip_46->Location = System::Drawing::Point(585, 343);
			this->chip_46->Name = L"chip_46";
			this->chip_46->Size = System::Drawing::Size(91, 79);
			this->chip_46->TabIndex = 34;
			this->chip_46->UseVisualStyleBackColor = true;
			// 
			// chip_50
			// 
			this->chip_50->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_50.Image")));
			this->chip_50->Location = System::Drawing::Point(3, 428);
			this->chip_50->Name = L"chip_50";
			this->chip_50->Size = System::Drawing::Size(91, 79);
			this->chip_50->TabIndex = 35;
			this->chip_50->UseVisualStyleBackColor = true;
			// 
			// chip_51
			// 
			this->chip_51->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_51.Image")));
			this->chip_51->Location = System::Drawing::Point(100, 428);
			this->chip_51->Name = L"chip_51";
			this->chip_51->Size = System::Drawing::Size(91, 79);
			this->chip_51->TabIndex = 36;
			this->chip_51->UseVisualStyleBackColor = true;
			// 
			// chip_52
			// 
			this->chip_52->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_52.Image")));
			this->chip_52->Location = System::Drawing::Point(197, 428);
			this->chip_52->Name = L"chip_52";
			this->chip_52->Size = System::Drawing::Size(91, 79);
			this->chip_52->TabIndex = 37;
			this->chip_52->UseVisualStyleBackColor = true;
			// 
			// chip_53
			// 
			this->chip_53->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_53.Image")));
			this->chip_53->Location = System::Drawing::Point(294, 428);
			this->chip_53->Name = L"chip_53";
			this->chip_53->Size = System::Drawing::Size(91, 79);
			this->chip_53->TabIndex = 38;
			this->chip_53->UseVisualStyleBackColor = true;
			// 
			// chip_54
			// 
			this->chip_54->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_54.Image")));
			this->chip_54->Location = System::Drawing::Point(391, 428);
			this->chip_54->Name = L"chip_54";
			this->chip_54->Size = System::Drawing::Size(91, 79);
			this->chip_54->TabIndex = 39;
			this->chip_54->UseVisualStyleBackColor = true;
			// 
			// chip_55
			// 
			this->chip_55->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_55.Image")));
			this->chip_55->Location = System::Drawing::Point(488, 428);
			this->chip_55->Name = L"chip_55";
			this->chip_55->Size = System::Drawing::Size(91, 79);
			this->chip_55->TabIndex = 40;
			this->chip_55->UseVisualStyleBackColor = true;
			// 
			// chip_56
			// 
			this->chip_56->ForeColor = System::Drawing::SystemColors::ControlText;
			this->chip_56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chip_56.Image")));
			this->chip_56->Location = System::Drawing::Point(585, 428);
			this->chip_56->Name = L"chip_56";
			this->chip_56->Size = System::Drawing::Size(91, 79);
			this->chip_56->TabIndex = 41;
			this->chip_56->UseVisualStyleBackColor = true;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nameLabel->Location = System::Drawing::Point(206, 666);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(284, 13);
			this->nameLabel->TabIndex = 1;
			this->nameLabel->Text = L"  Created by Juan Becerra (juanbecerra@u.boisestate.edu)";
			this->nameLabel->Click += gcnew System::EventHandler(this, &connectFourGUI::label1_Click);
			// 
			// gameConsole
			// 
			this->gameConsole->Cursor = System::Windows::Forms::Cursors::Default;
			this->gameConsole->Location = System::Drawing::Point(15, 531);
			this->gameConsole->Name = L"gameConsole";
			this->gameConsole->ReadOnly = true;
			this->gameConsole->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->gameConsole->Size = System::Drawing::Size(576, 132);
			this->gameConsole->TabIndex = 2;
			this->gameConsole->Text = L"";
			// 
			// newGameButton
			// 
			this->newGameButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->newGameButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newGameButton->Location = System::Drawing::Point(597, 531);
			this->newGameButton->Name = L"newGameButton";
			this->newGameButton->Size = System::Drawing::Size(91, 40);
			this->newGameButton->TabIndex = 3;
			this->newGameButton->Text = L"New Game";
			this->newGameButton->UseVisualStyleBackColor = false;
			// 
			// connectFourGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(704, 681);
			this->Controls->Add(this->newGameButton);
			this->Controls->Add(this->gameConsole);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->grid_table);
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
	private: System::Void connectFourGUI_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
