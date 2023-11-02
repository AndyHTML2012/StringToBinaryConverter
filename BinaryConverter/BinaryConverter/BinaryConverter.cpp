/****************************************************************************************
    Author:     Andres Trujillo
    Date:       11/01/2023
    Brief:      This program converts a user-inputed string to a printed binary output.
****************************************************************************************/

#include "pch.h"
#include "BinaryConverter.h"
#include <msclr/marshal_cppstd.h>
#include <windows.h>

//using namespace std;

using namespace msclr::interop;
using namespace System::Windows::Forms;

// Converts string to binary string output
std::string stringToBinary(std::string input) 
{
    std::string binaryString = "";

    for (char& _char : input) 
    {
        //  The function uses the bitset class to convert each 
        //  character in the input string to its binary representation.

        binaryString += std::bitset<8>(_char).to_string();
    }

    return binaryString;
}

// Convert std::string to System::String^
System::String^ stdStringToSystem(std::string input)
{
    std::string clrInput = input;

    // convert std::string to system string
    System::String^ clrOutput = marshal_as<System::String^>(clrInput);

    // return System::String
    return clrOutput;
}

// Convert System::String to std::string
std::string systemStringToStd(System::String^ input)
{
    System::String^ clrInput = input;

    // convert system string to standard string
    std::string clrOutput = marshal_as<std::string>(clrInput);

    // return std::string
    return clrOutput;
}

// App About Dialog Display
void DisplayResourceNAMessageBox()
{
    std::string title = "About";
    std::string message = "String To Binary Converter Version 1.0\nCreated By Andres Trujillo";

    System::String^ titleStr = gcnew System::String(title.c_str());
    System::String^ messageStr = gcnew System::String(message.c_str());

    MessageBox::Show(messageStr, titleStr, MessageBoxButtons::OK, MessageBoxIcon::Information);
}