#pragma once
#ifndef __TILE__
#define __TILE__
#include "DisplayObject.h"

class Tile : public DisplayObject
{
public:
	//Constructor
	Tile();
	//Destructor
	~Tile();

	//Life Cycle functions
	void draw();
	void update();
	void clean();

	
};





#endif /*defined __TILE__*/
