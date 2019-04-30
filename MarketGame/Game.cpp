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
	areas.emplace(AreaType::BlackMarket, Area("Welcome to the black market. Be on your guard.\n", "Black Market", AreaType::BlackMarket, 'b'));
	areas.emplace(AreaType::FishMarket, Area("Welcome to the fish market. It smells here.\n", "Fish Market", AreaType::FishMarket, 'f'));
	areas.emplace(AreaType::Arena, Area("Welcome to the arena. The intoxicating smell of blood is in the air.\n", "Arena", AreaType::Arena, 'a'));
	areas.emplace(AreaType::Bank, Area("Welcome to the bank. You can hear the jingle of precious metals through the walls.\n", "Bank", AreaType::Bank, 'k'));
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

	std::cout << "Enter the letter of an area to go to: ";
	std::getline(std::cin, inString);
	for (auto & area : areas)
	{
		if (std::string(1, area.second.get_hotkey()) == inString)
		{
			playerArea = &area.second;
		}
	}
	std::cout << "You travel to the " << playerArea->get_name() << '\n';
	std::cout << playerArea->get_description() << '\n';

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

