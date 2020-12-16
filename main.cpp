#include <iostream>
#include "board.h"

namespace Pieces 
{
	Piece blackPawn = Piece('p');
	Piece blackRook = Piece('r');
	Piece blackKnight = Piece('n');
	Piece blackBishop = Piece('b');
	Piece blackQueen = Piece('q');
	Piece blackKing = Piece('k');

	Piece whitePawn = Piece('P');
	Piece whiteRook = Piece('R');
	Piece whiteKnight = Piece('N');
	Piece whiteBishop = Piece('B');
	Piece whiteQueen = Piece('Q');
	Piece whiteKing = Piece('K');
}

int main() 
{

	Board board = Board();
	board.pieceMap[0][1] = &Pieces::whitePawn;
	board.pieceMap[1][1] = &Pieces::whitePawn;
	board.pieceMap[2][1] = &Pieces::whitePawn;
	board.pieceMap[3][1] = &Pieces::whitePawn;
	board.pieceMap[4][1] = &Pieces::whitePawn;
	board.pieceMap[5][1] = &Pieces::whitePawn;
	board.pieceMap[6][1] = &Pieces::whitePawn;
	board.pieceMap[7][1] = &Pieces::whitePawn;
	board.pieceMap[0][0] = &Pieces::whiteRook;
	board.pieceMap[7][0] = &Pieces::whiteRook;
	board.pieceMap[1][0] = &Pieces::whiteKnight;
	board.pieceMap[6][0] = &Pieces::whiteKnight;
	board.pieceMap[2][0] = &Pieces::whiteBishop;
	board.pieceMap[5][0] = &Pieces::whiteBishop;
	board.pieceMap[3][0] = &Pieces::whiteKing;
	board.pieceMap[4][0] = &Pieces::whiteQueen;

	board.pieceMap[0][6] = &Pieces::blackPawn;
	board.pieceMap[1][6] = &Pieces::blackPawn;
	board.pieceMap[2][6] = &Pieces::blackPawn;
	board.pieceMap[3][6] = &Pieces::blackPawn;
	board.pieceMap[4][6] = &Pieces::blackPawn;
	board.pieceMap[5][6] = &Pieces::blackPawn;
	board.pieceMap[6][6] = &Pieces::blackPawn;
	board.pieceMap[7][6] = &Pieces::blackPawn;
	board.pieceMap[0][7] = &Pieces::blackRook;
	board.pieceMap[7][7] = &Pieces::blackRook;
	board.pieceMap[1][7] = &Pieces::blackKnight;
	board.pieceMap[6][7] = &Pieces::blackKnight;
	board.pieceMap[2][7] = &Pieces::blackBishop;
	board.pieceMap[5][7] = &Pieces::blackBishop;
	board.pieceMap[3][7] = &Pieces::blackKing;
	board.pieceMap[4][7] = &Pieces::blackQueen;

	board.display();
	return 0;
}
