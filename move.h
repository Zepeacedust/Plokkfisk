#pragma once
struct Change 
{
	int x;
	int y;
	Piece* change;
};
class Move
{
	int numChanges;
	Change[4] changes;
	Move(int x1, int x2, int y1, int y2, Piece moved);
	//en passant
	Move(int x1, int x2, int x3, int y1, int y2, int y3);
	//hrókfæring
	Move(int x1, int x2, int y1, int y2, Piece moved);
};