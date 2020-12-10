#pragma once
#include "piece.h"

class Board
{
	char[8, 8] pieceMap;
	Piece[32] pieces;
	Board();
	std::vector<Move> findMoves()
};