#pragma once
#include <limits>

class Entity
{
public:
	unsigned int const ID;
	Entity()
		:
		ID{ statID }
	{
		statID++;
	}
private:
	static unsigned int statID;
};



