#pragma once
#ifndef GAMEMODEL_H
#define GAMEMODEL_H

//////// LIBS
#include <list>
#include <map>
#include <string>

//////// ME

// ME SAFE

// ME UNSAFE
#include "Player.h"
#include "Area.h"

// DECLARATIONS

//////////////////////////////////////////////////////////////////////////////////////////////////// >8)
//////////////////////////////////////////////////////////////////////////////////////////////////// GameModel.h
//////////////////////////////////////////////////////////////////////////////////////////////////// >8)

class GameModel
{
	////////////////////////////////////////>~
	////////// Data
	////////////////////////////////////////>~
private:
	// Reasons to use public fields rather than getters and setters include:
	/*
	1 There are no illegal values.
	2 The client is expected to edit it.
	3 To be able to write things such as object.X.Y = Z.
	4 To making a strong promise that the value is just a value and there are no side - effects associated with it(and won't be in the future either).*/

	Player player; // get

	std::list<Area> worldPlaces; // get

	int turnCount{ 0 }; // get

	int inputCommand{ 0 }; // get set

	bool isHelpRequested{ false }; // get set

	bool debug{ false }; // get set

	//////////////////// Mutators
	//////////
public:
	// Player
	Player const & get_player() const { return player; };
	// World places
	std::list<Area> const & get_worldPlaces() const { return worldPlaces; };
	// turnCount
	int get_turnCount() const { return turnCount; };
	// input number
	int get_inputCommand() const { return inputCommand; };
	void set_inputCommand(int inputCommand_) { inputCommand = inputCommand_; };
	// help requested flag
	bool get_isHelpRequested() const { return isHelpRequested; };
	void set_isHelpRequested(bool isHelpRequested_) { isHelpRequested = isHelpRequested_; };
	// help requested flag
	bool get_debug() const { return debug; };
	void set_debug(bool debug_) { debug = debug_; };


	////////////////////////////////////////>~
	////////// Constructors
	////////////////////////////////////////>~
public:
	//////////////////// Ctor
	//////////

	GameModel();

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
public:

	void init();
	void update();
	void reset_temp_state();

	// resets various things like the command number;

	//////////////////// Private
	//////////
private:



	////////////////////////////////////////>~
	////////// Operators
	////////////////////////////////////////>~
public:
};

#endif