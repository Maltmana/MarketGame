#pragma once


// Some ease of use defines

#define scast(X)  static_cast<std::underlying_type<X>::type>

// Flags

enum class Commands
{
	Help,
	Debug,
	LAST // literally just here to use in making the bitset the right size.
};