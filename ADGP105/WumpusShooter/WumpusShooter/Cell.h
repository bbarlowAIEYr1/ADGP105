#pragma once
#include <iostream> //c++ lib.
#include <string> //c++ lib.
#include <fstream> //c++ lib.

//Cell class: Used to set the position for player, monster, smells and shoot locations (public)
//Has a custom and default constructor
//Has an operator overload
class Cell //cell class
{
public:
	int x; //vertical layout
	int y; //horizontal layout
	Cell() //default constructor
	{

	}
	Cell(int posx, int posy) //x and y ints
	{
		x = posx; //assigns x
		y = posy; //assigns y
	}
	bool operator==(Cell &other) //operator overload
	{
		if (x == other.x && y == other.y) //if this is true, do this:
			return true; //return true flag
						 //else, do this:
		return false; //return false flag
	}
};