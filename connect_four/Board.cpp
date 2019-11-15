#include "Board.h"

// Dimensions of board
const int X_DIM = 7;
const int Y_DIM = 6;
const int GLOBAL_WIN = 4;

// Array of integers representing board
// 0 - Blank
// 1 - Blue
// 2 - Orange
int BoardMap[X_DIM][Y_DIM];

/*
Constructor: Calls initialize game, which sets entire board array to 0
*/
Board::Board(void)
{
	InitializeGame();
}

/*
Adds a piece to the board.

Starts at the specified x and top of y array,
then it sinks to the bottom most vacent spot.

Returns a pair:
1. An <x,y> tuple of where the piece was placed (<-1,-1> if unable to place)
2. bool, true if move resulted in win
*/
void Board::AddPiece(int x, int c)
{
	// TODO
	throw gcnew System::NotImplementedException();
}

/*
Re-initializes the game, which sets entire board array to 0
*/
void Board::NewGame(void)
{
	InitializeGame();
}

/*
Sets the entire array to 0s
*/
void Board::InitializeGame(void)
{
	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 6; j++) {
			BoardMap[i][j] = 0;
		}
	}
}

/*
Returns bool - Are the specified coordinates in range of array?
*/
bool Board::IsInRange(int x, int y)
{
	return (x >= 0) && (x < X_DIM) && (y >= 0) && (y < Y_DIM);
}

/*
Returns bool - Did the passed in coordinates + color result in a win?
*/
bool Board::IsWin(int x, int y, int c)
{
	// TODO
	return false;
}
