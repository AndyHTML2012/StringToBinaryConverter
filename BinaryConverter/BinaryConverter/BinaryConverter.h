/****************************************************************************************
    Author:     Andres Trujillo
    Date:       11/01/2023
    Brief:      This program converts a user-inputed string to a printed binary output.
****************************************************************************************/
#pragma once

#include <string>
#include <bitset>

std::string stringToBinary(std::string input);

System::String^ stdStringToSystem(std::string input);

std::string systemStringToStd(System::String^ input);

void DisplayResourceNAMessageBox();