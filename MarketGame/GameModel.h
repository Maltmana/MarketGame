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

	Player player; // get

	std::list<Area> worldPlaces;

	//////////////////// Mutators
	//////////
public:

	Player const & get_player() const { return player; };

	std::list<Area> const & get_worldPlaces() const { return worldPlaces; };

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

	//////////////////// Private
	//////////
private:

	////////////////////////////////////////>~
	////////// Operators
	////////////////////////////////////////>~
public:
};

#endif