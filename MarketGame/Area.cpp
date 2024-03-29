#include "Area.h"

//////// LIBS

#ifdef DEBUG
#include <iostream>
#endif // DEBUG



//////// ME

// ME SAFE

// ME UNSAFE

//////////////////////////////////////////////////////////////////////////////////////////////////// >8)
//////////////////////////////////////////////////////////////////////////////////////////////////// ClassX.cpp
//////////////////////////////////////////////////////////////////////////////////////////////////// >8)

////////////////////////////////////////>~
////////// Data
////////////////////////////////////////>~

//////////////////// Mutators
//////////

void Area::add_connectedArea(Area area)
{
	connectedAreas.emplace_back(area);
}

////////////////////////////////////////>~
////////// Constructors
////////////////////////////////////////>~

//////////////////// Ctor
//////////

Area::Area(std::string description, std::string name)
	:
	description{ description },
	name{ name }
{
#ifdef DEBUG
	std::cout << "DEBUG>> " << "Area created. Name: " + name + ". " + "ID: " << ID << '\n';
#endif // DEBUG
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

//////////////////// Private
//////////

////////////////////////////////////////>~
////////// Operators
////////////////////////////////////////>~