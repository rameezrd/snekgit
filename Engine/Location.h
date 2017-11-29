#pragma once

#include "Graphics.h"

class Location
{
public:
	void Add(const Location& val)
	{
		x = x + val.x;
		y = y + val.y;
	}
	bool operator==(const Location& rhs) const
	{
		return x == rhs.x && y == rhs.y;
	}
	int x;
	int y;
};