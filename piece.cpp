#include "piece.h"
Piece::Piece() 
{
	this->display = 'X';
	this->player = false;
	this->value = -10;
}
Piece::Piece(char name)
{
	this->display = name;
	this->player = name & 1 << 5;

	int direction = player ? -1 : 1;
	this->value = -10;
	char type = name | (1 << 5);
	switch (type)
	{
	case 'p':

		this->moveVectors.push_back(MoveVector(1, 0, 0, 1 * direction, 1));
		this->moveVectors.push_back(MoveVector(0, 1, 1, 1 * direction, 1));
		this->moveVectors.push_back(MoveVector(0, 1, -1, 1 * direction, 1));

		this->value = 1;
		break;
	case 'r':
		this->moveVectors.push_back(MoveVector(1, 1, 1, 0, 8));
		this->moveVectors.push_back(MoveVector(1, 1, 0, 1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, -1, 0, 8));
		this->moveVectors.push_back(MoveVector(1, 1, 0, -1, 8));

		this->value = 5;
		break;
	case 'n':
		this->moveVectors.push_back(MoveVector(1, 1, 2, 1, 1));
		this->moveVectors.push_back(MoveVector(1, 1, 2, -1, 1));
		this->moveVectors.push_back(MoveVector(1, 1, -2, 1, 1));
		this->moveVectors.push_back(MoveVector(1, 1, -2, -1, 1));

		this->moveVectors.push_back(MoveVector(1, 1, 1, 2, 1));
		this->moveVectors.push_back(MoveVector(1, 1, 1, -2, 1));
		this->moveVectors.push_back(MoveVector(1, 1, -1, 2, 1));
		this->moveVectors.push_back(MoveVector(1, 1, -1, -2, 1));

		this->value = 3;
		break;
	case 'b':
		this->moveVectors.push_back(MoveVector(1, 1, 1, 1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, 1, -1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, -1, 1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, -1, -1, 8));
		this->value = 3;
		break;
	case 'q':
		this->moveVectors.push_back(MoveVector(1, 1, 1, 1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, 1, -1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, -1, 1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, -1, -1, 8));

		this->moveVectors.push_back(MoveVector(1, 1, 1, 0, 8));
		this->moveVectors.push_back(MoveVector(1, 1, 0, 1, 8));
		this->moveVectors.push_back(MoveVector(1, 1, -1, 0, 8));
		this->moveVectors.push_back(MoveVector(1, 1, 0, -1, 8));

		this->value = 9;
		break;
	case 'k':
		this->moveVectors.push_back(MoveVector(1, 1, 1, 1, 1));
		this->moveVectors.push_back(MoveVector(1, 1, 1, -1, 1));
		this->moveVectors.push_back(MoveVector(1, 1, -1, 1, 1));
		this->moveVectors.push_back(MoveVector(1, 1, -1, -1, 1));

		this->moveVectors.push_back(MoveVector(1, 1, 1, 0, 1));
		this->moveVectors.push_back(MoveVector(1, 1, 0, 1, 1));
		this->moveVectors.push_back(MoveVector(1, 1, -1, 0, 1));
		this->moveVectors.push_back(MoveVector(1, 1, 0, -1, 1));

		this->value = 9001;
		break;
	}
}