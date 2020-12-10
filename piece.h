#pragma once
#include <vector>
#include "moveVector.h"
class Piece 
{
public:
	int value;
	///<synopsis>
	///true = white, false = black
	///</synopsis>
	bool player;
	std::vector<MoveVector> moveVectors;
	Piece(char pieceName);
};