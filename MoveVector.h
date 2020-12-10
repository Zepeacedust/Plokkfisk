#pragma once
struct MoveVector
{
	bool attacking;
	bool moving;
	int length;
	int x;
	int y;
	MoveVector(bool _attacking, bool _moving, int _length, int _x, int _y) :attacking(_attacking), moving(_moving), length(_length), x(_x), y(_y) {};
};