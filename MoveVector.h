#pragma once
struct MoveVector
{
	bool attacking;
	bool moving;
	int length;
	int x;
	int y;
	MoveVector(bool _attacking, bool _moving, int _x, int _y, int _length) :attacking(_attacking), moving(_moving), length(_length), x(_x), y(_y) {};
};