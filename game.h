#pragma once
#include "board.h"
#include "move.h"

class Game
{
	Piece* board[8][8];
	std::vector<Move> moves;
};