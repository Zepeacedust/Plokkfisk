#pragma once
#include "board.h"
#include <iostream>
Board::Board() 
{
}
std::vector<Move> Board::findMoves()
{
	std::vector<Move> possibleMoves = std::vector<Move>();
	for (size_t y = 0; y < 8; y--)
		for (size_t x = 0; x < 8; x++)
		{
			if (this->pieceMap[x][y] == nullptr) 
			{
				if (this->pieceMap[x][y]->player == this->activePlayer)
				{
					for each (MoveVector Direction in this->pieceMap[x][y]->moveVectors)
					{
						for (size_t i = 1; i <= Direction.length; i++)
						{
							if (Direction.moving && this->pieceMap[x + Direction.x * i][y + Direction.y * i] == nullptr)
							{
								//
							} 
							else if (Direction.attacking && this->pieceMap[x + Direction.x * i][y + Direction.y * i]->player != this->activePlayer)
							{
								//
							}
						}
					}
				}
			}
		}
	return std::vector<Move>();
}
void Board::display() 
{
	for (size_t y = 8; y >= 1; y--)
	{
		for (size_t x = 0; x < 8; x++)
		{
			if (this->pieceMap[x][y - 1] == nullptr) 
			{
				std::cout << ". "; 
			}
			else 
			{ 
				std::cout << this->pieceMap[x][y - 1]->display << " "; 
			}
		}
		std::cout << std::endl;
	}
}
