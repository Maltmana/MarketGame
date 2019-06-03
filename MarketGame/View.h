#pragma once
#ifndef VIEW_H
#define VIEW_H

//////// LIBS
#include <sstream>

//////// ME

// SAFE
#include "Enums.h"

// UNSAFE
#include "GameModel.h"

//////// DECLARATIONS



//! Brief:
/*!
What-Data:
What-Verb:
Where:
Why:
How:
Misc:
*/
class View 	
{
	////////////////////////////////////////////////////////////////////////////////////////////////////
	////////// Data
	////////////////////////////////////////////////////////////////////////////////////////////////////
private:
	GameModel & model;
	std::string outString;

	//////////////////// DataInterface
	//////////
public:

	////////////////////////////////////////////////////////////////////////////////////////////////////
	////////// Functions
	////////////////////////////////////////////////////////////////////////////////////////////////////
private:
	void add_intro();
	void add_input_border();
	void add_playerStats();
	void add_response();
	void add_options();
	void add_tips();
	void send_output();

	//////////////////// FuncInterface
	//////////
public:
	void update();

	//////////////////// Operators
	//////////
public:

	////////////////////////////////////////////////////////////////////////////////////////////////////
	////////// Constructors
	////////////////////////////////////////////////////////////////////////////////////////////////////
public:
	//////////////////// Ctor
	//////////
	View(GameModel & model_);

	//////////////////// Dtor
	//////////

	//////////////////// Copy
	//////////
	explicit View(const View& other) = delete; // copy constructor
	View& operator=(const View& other) = delete; // copy assignment

	//////////////////// Move
	//////////
	explicit View(View&& other) noexcept = delete; // move constructor
	View& operator=(View&& other) noexcept = delete; // move assignment
};

#endif