#pragma once
#include <vector>
#include "moveVector.h"
class Piece 
{
public:

	char display;
	int value;
	///<synopsis>
	///true = white, false = black
	///</synopsis>
	bool player;
	Piece();
	Piece(char pieceName);
	std::vector<MoveVector> moveVectors;
};