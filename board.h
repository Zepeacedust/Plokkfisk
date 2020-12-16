#pragma once
#include "piece.h"
#include "move.h"
class Board
{
public:
	bool activePlayer;
	bool kingsideCastle;
	bool queensideCastle;
	Piece* pieceMap[8][8] = {};
	Piece pieces[64];
	Board();
	std::vector<Move> findMoves();
	void display();
};