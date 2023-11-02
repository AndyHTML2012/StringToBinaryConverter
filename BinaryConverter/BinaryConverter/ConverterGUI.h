/****************************************************************************************
	Author:     Andres Trujillo, VS Winform Designer Generated Code
	Date:       11/01/2023
	Brief:      Program GUI design and functionality code.
****************************************************************************************/
#pragma once
#include "BinaryConverter.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MainMenu^ mainMenu1;
	protected:
	private: System::Windows::Forms::MenuItem^ menuItem1;
	private: System::Windows::Forms::MenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::MenuItem^ menuItem3;
	private: System::Windows::Forms::MenuItem^ AboutToolmenuItem;

	private: System::Windows::Forms::TableLayoutPanel^ ControlsContainer;
	private: System::Windows::Forms::Button^ ClearFormButton;



	private: System::Windows::Forms::Label^ DecimalRowLabel;



	private: System::Windows::Forms::Label^ BinaryRowLabel;
	private: System::Windows::Forms::TextBox^ inputTextBox;
	private: System::Windows::Forms::TextBox^ outputTextBox;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->mainMenu1 = (gcnew System::Windows::Forms::MainMenu(this->components));
			this->menuItem1 = (gcnew System::Windows::Forms::MenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem3 = (gcnew System::Windows::Forms::MenuItem());
			this->AboutToolmenuItem = (gcnew System::Windows::Forms::MenuItem());
			this->ControlsContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->DecimalRowLabel = (gcnew System::Windows::Forms::Label());
			this->BinaryRowLabel = (gcnew System::Windows::Forms::Label());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ClearFormButton = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->ControlsContainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainMenu1
			// 
			this->mainMenu1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(2) { this->menuItem1, this->menuItem3 });
			// 
			// menuItem1
			// 
			this->menuItem1->Index = 0;
			this->menuItem1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(1) { this->exitToolStripMenuItem });
			this->menuItem1->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Index = 0;
			this->exitToolStripMenuItem->Shortcut = System::Windows::Forms::Shortcut::AltF4;
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// menuItem3
			// 
			this->menuItem3->Index = 1;
			this->menuItem3->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(1) { this->AboutToolmenuItem });
			this->menuItem3->Text = L"Help";
			// 
			// AboutToolmenuItem
			// 
			this->AboutToolmenuItem->Index = 0;
			this->AboutToolmenuItem->Text = L"About";
			this->AboutToolmenuItem->Click += gcnew System::EventHandler(this, &Form1::AboutToolmenuItem_Click);
			// 
			// ControlsContainer
			// 
			this->ControlsContainer->AccessibleName = L"ControlContainer";
			this->ControlsContainer->AutoSize = true;
			this->ControlsContainer->ColumnCount = 2;
			this->ControlsContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.77885F)));
			this->ControlsContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				88.22115F)));
			this->ControlsContainer->Controls->Add(this->DecimalRowLabel, 0, 0);
			this->ControlsContainer->Controls->Add(this->BinaryRowLabel, 0, 1);
			this->ControlsContainer->Controls->Add(this->inputTextBox, 1, 0);
			this->ControlsContainer->Controls->Add(this->outputTextBox, 1, 1);
			this->ControlsContainer->Controls->Add(this->ClearFormButton, 1, 2);
			this->ControlsContainer->Location = System::Drawing::Point(12, 12);
			this->ControlsContainer->Name = L"ControlsContainer";
			this->ControlsContainer->RowCount = 3;
			this->ControlsContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->ControlsContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->ControlsContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->ControlsContainer->Size = System::Drawing::Size(433, 127);
			this->ControlsContainer->TabIndex = 0;
			// 
			// DecimalRowLabel
			// 
			this->DecimalRowLabel->AccessibleName = L"DecimalRowTitle";
			this->DecimalRowLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->DecimalRowLabel->AutoSize = true;
			this->DecimalRowLabel->Location = System::Drawing::Point(3, 12);
			this->DecimalRowLabel->Name = L"DecimalRowLabel";
			this->DecimalRowLabel->Size = System::Drawing::Size(34, 13);
			this->DecimalRowLabel->TabIndex = 2;
			this->DecimalRowLabel->Text = L"String";
			this->DecimalRowLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BinaryRowLabel
			// 
			this->BinaryRowLabel->AccessibleName = L"BinaryOutputRowTitle";
			this->BinaryRowLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->BinaryRowLabel->AutoSize = true;
			this->BinaryRowLabel->Location = System::Drawing::Point(3, 49);
			this->BinaryRowLabel->Name = L"BinaryRowLabel";
			this->BinaryRowLabel->Size = System::Drawing::Size(36, 13);
			this->BinaryRowLabel->TabIndex = 3;
			this->BinaryRowLabel->Text = L"Binary";
			this->BinaryRowLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// inputTextBox
			// 
			this->inputTextBox->AccessibleName = L"Decimal_Input";
			this->inputTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputTextBox->Location = System::Drawing::Point(54, 3);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->inputTextBox->Size = System::Drawing::Size(376, 20);
			this->inputTextBox->TabIndex = 4;
			this->inputTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::inputTextBox_TextChanged);
			// 
			// outputTextBox
			// 
			this->outputTextBox->AccessibleName = L"Binary_Output";
			this->outputTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->outputTextBox->Location = System::Drawing::Point(54, 40);
			this->outputTextBox->Multiline = true;
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->ReadOnly = true;
			this->outputTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->outputTextBox->Size = System::Drawing::Size(376, 31);
			this->outputTextBox->TabIndex = 5;
			// 
			// ClearFormButton
			// 
			this->ClearFormButton->AccessibleName = L"CancelButton";
			this->ClearFormButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ClearFormButton->AutoSize = true;
			this->ClearFormButton->Location = System::Drawing::Point(54, 77);
			this->ClearFormButton->Name = L"ClearFormButton";
			this->ClearFormButton->Size = System::Drawing::Size(376, 47);
			this->ClearFormButton->TabIndex = 0;
			this->ClearFormButton->Text = L"Clear";
			this->ClearFormButton->UseVisualStyleBackColor = true;
			this->ClearFormButton->Click += gcnew System::EventHandler(this, &Form1::ClearFormButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(458, 151);
			this->Controls->Add(this->ControlsContainer);
			this->MaximizeBox = false;
			this->Menu = this->mainMenu1;
			this->Name = L"Form1";
			this->Text = L"Binary String Converter";
			this->ControlsContainer->ResumeLayout(false);
			this->ControlsContainer->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		// Exit MenuStrip Button Functionality
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
		// String to Binary Conversion functionality
	private: System::Void inputTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		// take user inputed string
		std::string clrInput = systemStringToStd(inputTextBox->Text);

		// convert to binary
		std::string binOutput = stringToBinary(clrInput);

		// print to output box
		System::String^ clrOutput = stdStringToSystem(binOutput);
		outputTextBox->Text = clrOutput;
	}
		// Clear form data
	private: System::Void ClearFormButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		inputTextBox->Clear();
		outputTextBox->Clear();
	}
		// Display App About Dialog
	private: System::Void AboutToolmenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DisplayResourceNAMessageBox();
	}
};
}
