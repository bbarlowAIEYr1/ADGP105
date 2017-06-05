#pragma once
#include <iostream> //c++ lib.
#include <string> //c++ lib.
#include "Cell.h" //header file

//Monster class: holds position for wumpus (public)
//Has a default constructor
class Monster //monster class
{
public: //public data
	Cell mPosition; //used for grid position

	Monster() //default constructor
	{

	}
};