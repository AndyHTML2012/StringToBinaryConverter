/****************************************************************************************
    Author:     Andres Trujillo
    Date:       11/01/2023
    Brief:      This program converts a user-inputed string to a printed binary output.
****************************************************************************************/
#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "ConverterGUI.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}