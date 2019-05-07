#include "Controller.h"

// Warning Disable
#pragma warning( push )
#pragma warning( disable : 4244 ) // caused by std::algorithm and tolower.


//////// LIBS
#include <iostream>
#include <algorithm>
#include <cctype>

//////// ME

// ME SAFE

// ME UNSAFE


//////////////////////////////////////////////////////////////////////////////////////////////////// >8)
//////////////////////////////////////////////////////////////////////////////////////////////////// Controller.cpp
//////////////////////////////////////////////////////////////////////////////////////////////////// >8)

////////////////////////////////////////>~
////////// Data
////////////////////////////////////////>~

//////////////////// Mutators
//////////

////////////////////////////////////////>~
////////// Constructors
////////////////////////////////////////>~

//////////////////// Ctor
//////////

Controller::Controller(GameModel & model_)
	:
	model{model_}
{
}

//////////////////// Dtor
//////////

//////////////////// Copy
//////////

//////////////////// Move
//////////

////////////////////////////////////////>~
////////// Functions
////////////////////////////////////////>~

//////////////////// Public
//////////
bool invalidInput{ true };
void Controller::update()
{
	invalidInput = true;
	while (invalidInput)
	{
		receive_input();
		process_input();
	}
	act_on_input();
}

//////////////////// Private
//////////

void Controller::receive_input()
{
	std::getline(std::cin, inString);
}

void Controller::process_input()
{
	// get number from string
	std::stringstream ss(inString);
	ss >> inNumber;
	// make string all lower case
	std::transform(inString.begin(), inString.end(), inString.begin(), [](unsigned char c) -> unsigned char { return std::tolower(c); }); // TODO : use unicode library

	if (inString == "h") // we do this here because there is no reason to update the model without an appropriate command for it.
	{
		std::cout << "I have no help for you.\n";
		return;
	}
	if (inString == "debug") // we do this here because there is no reason to update the model without an appropriate command for it.
	{
		model.set_debug(!model.get_debug());
		std::cout << "Debug mode = " << model.get_debug() << "\n";
		return;
	}
	if (inNumber <= 0)
	{
		std::cout << "Invalid input. This program only accepts integers greater than 0.\n";
		return;
	}

	invalidInput = false;
}

void Controller::act_on_input()
{
	// First reset flags and other temp state
	model.reset_temp_state();
	// Then this crap
	model.set_inputCommand(inNumber);
	if (inString == "h")
	{
		model.set_isHelpRequested(true);
	}
	// start with help, something the model is not concerned with, except for that different screens provide different prompts. and the screens are determined by the players location.

}

////////////////////////////////////////>~
////////// Operators
////////////////////////////////////////>~


// Warning Enable
#pragma warning( pop )