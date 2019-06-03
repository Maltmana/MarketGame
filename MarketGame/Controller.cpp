#include "Controller.h"

// Warning Disable
#pragma warning( push )
#pragma warning( disable : 4244 ) // caused by std::algorithm and tolower.

//////// LIBS
#include <iostream>
#include <algorithm>
#include <cctype>
#include <unordered_map>
#include <vector>
#include <functional>

//////// ME

// SAFE

// UNSAFE

////////////////////////////////////////////////////////////////////////////////////////////////////
////////// Data
////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////// DataInterface
//////////

////////////////////////////////////////////////////////////////////////////////////////////////////
////////// Functions
////////////////////////////////////////////////////////////////////////////////////////////////////
void Controller::receive_input()
{
	std::getline(std::cin, inString);
}

void Controller::process_input()
{
	// make string all lower case
	std::transform(inString.begin(), inString.end(), inString.begin(), [](unsigned char c) -> unsigned char { return std::tolower(c); }); // TODO : use unicode library
}

void Controller::act_on_input()
{
	// combine commands with functions in a map.
	const static std::unordered_map<std::string, std::function<void()>> functionmap{
		{"h",[&]() {
			model.commands.set(scast(Commands)(Commands::Help));
		}},
		{"debug",[&]() {
			model.commands.set(scast(Commands)(Commands::Debug));
		}},
	};
	// find the function from the string
	auto const & fun = functionmap.find(inString);
	// check if any function was found
	if (fun != functionmap.end())
	{
		// run the dang thing
		fun->second();
		model.goodInput = true; // let the model know the input wasn't gibberish.
		// If I want the shop keepers to respond to the users crappy input, and have it be unique to the shop keepers and the situation, I need to go through the model.. that would is best.
		// most flexible most fun. also follows single-responsibility

	}
	else // you suck user. The model didn't get goodInput, and so its going to go back here without much interesting happening.
	{
	}
}

//////////////////// FuncInterface
//////////
void Controller::update()
{
	receive_input();
	process_input();
	act_on_input();
}
//////////////////// Operators
//////////

////////////////////////////////////////////////////////////////////////////////////////////////////
////////// Constructors
////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////// Ctor
//////////
Controller::Controller(GameModel & model_)
	:
	model{ model_ }
{
}

//////////////////// Dtor
//////////

//////////////////// Copy
//////////

//////////////////// Move
//////////

// Warning Enable
#pragma warning( pop )