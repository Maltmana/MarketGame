#include "Controller.h"


//////// LIBS
#include <iostream>

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

void Controller::update()
{
	receive_input();
}

//////////////////// Private
//////////

void Controller::receive_input()
{
	std::getline(std::cin, inString);
}

void Controller::compare_commands()
{
	// Static commands which stay the same every screen ->
	if (inString == "help")
	{
		// can raise help event , can set help state, can raise flag for help. 
	}

	// classic adventure game
	// can navigate trees of connected locations.
	// can print map of all the locations.
	// can travel between
	// map is printed and defined from text file.

	/////////////// The commands that the user can issue are dependent on the area, the scene
	/////////////// If the user is at an area, his commands are the possible areas he can go or things to interact with
	/////////////// If the user is with a shop - his commands are the shop commands the possible things to buy
	/////////////// If at a dialogue tree, the dialogue options.
	// check to see if what the user entered corresponds to any of the possible command options that are generated each turn.
	// if it doesn't then tell the user nothing and go back to the beginning of the controller loop 
	// if it does then let the command affect the model and the view result will come to the screen.
}

////////////////////////////////////////>~
////////// Operators
////////////////////////////////////////>~