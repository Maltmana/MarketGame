#include "View.h"

//////// LIBS
#include <iostream>

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
void View::add_intro()
{
	for (size_t i = 0; i < 30; i++)
	{
		outString.append("* * * * * * * * * * ");
		outString.append("* * * * * * * * * * ");
		outString.append("* * * * * * * * * *\n");
	}
	outString.append("Welcome to How Bazaar!\nThis Virtual-Reality experience is brought to you by Wesley Richmond\n");
}

void View::add_input_border()
{
	outString.append("* * * * * * * * * * ");
	outString.append("* * * * * * * * * *\n");
	outString.append("* * * * * * * * * * ");
	outString.append("* * * * * * * * * *\n");
}

void View::add_playerStats()
{
	outString.append("Player Name: " + model.player.get_name() + "\n" + "Player Location: " + model.player.get_area()->get_name() + "\n");
	if (model.commands[scast(Commands)(Commands::Debug)])
	{
		std::ostringstream ostream;
		ostream << model.turnCount;
		outString.append("Turn count: " + ostream.str() + "\n");
	}
}

void View::add_response()
{

}

void View::add_options()
{
	for (auto & area : model.player.get_area()->get_connectedAreas())
	{
		outString.append(area.get_name() + "\n");
	}
}

void View::add_tips()
{
	outString.append("'h' for help.\n");
}

void View::send_output()
{
	// output and clear
	std::cout << outString;
	outString.clear();
}

//////////////////// FuncInterface
//////////
void View::update()
{
	add_input_border();
	add_playerStats();
	add_tips();
	add_response();
	add_options();
	send_output();
}

//////////////////// Operators
//////////

////////////////////////////////////////////////////////////////////////////////////////////////////
////////// Constructors
////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////// Ctor
//////////
View::View(GameModel & model_)
	:
	model{ model_ }
{
	add_intro();
}

//////////////////// Dtor
//////////

//////////////////// Copy
//////////

//////////////////// Move
//////////