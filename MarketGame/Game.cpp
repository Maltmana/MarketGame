#include "Game.h"

//////// LIBS

#include <iostream>
#include <string>
#include <sstream>

//////// ME

// ME SAFE

// ME UNSAFE

//////////////////////////////////////////////////////////////////////////////////////////////////// >8)
//////////////////////////////////////////////////////////////////////////////////////////////////// Game.cpp
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

Game::Game()
{
	areas.emplace(AreaType::BlackMarket, Area("Welcome to the black market. Be on your guard.\n", AreaType::BlackMarket, 'b'));
	areas.emplace(AreaType::FishMarket, Area("Welcome to the fish market. It smells here.\n", AreaType::FishMarket, 'f'));
	areas.emplace(AreaType::Arena, Area("Welcome to the arena. The intoxicating smell of blood is in the air.\n", AreaType::Arena, 'a'));
	areas.emplace(AreaType::Bank, Area("Welcome to the bank. You can hear the jingle of precious metals through the walls.\n", AreaType::Bank, 'k'));
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

void Game::update()
{



	//std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	//std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	//std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";

	std::cout << "Enter the name of an area to go to: ";
	std::getline(std::cin, inString);
	std::cout << "You travel to the " << inString << '\n';

	//std::cout << areas.find()


	/*std::string mystr;
	float price = 0;
	int quantity = 0;

	std::cout << "Enter price: ";
	std::getline(std::cin, mystr);
	std::stringstream(mystr) >> price;
	std::cout << "Enter quantity: ";
	std::getline(std::cin, mystr);
	std::stringstream(mystr) >> quantity;
	std::cout << "Total price: " << price * quantity << std::endl;*/
	
}


//////////////////// Private
//////////

////////////////////////////////////////>~
////////// Operators
////////////////////////////////////////>~

