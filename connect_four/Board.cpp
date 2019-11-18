#include "Board.h"

// Dimensions of board
const int X_DIM = 6;
const int Y_DIM = 7;
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
Adds a piece to the board on the specified index

Returns a tuple:
1: Returns a pair of the next button coordinate to activate
	(This is just above where the chip was placed, if in range).
2: Returns boolean of whether this resulted in a win or not
*/
std::pair<std::pair<int, int>, bool> Board::AddPiece(int x, int y, int c)
{
	// Set up variables to return
	std::pair<int, int> retCoords = make_pair(-1, -1);
	bool retWin = false;

	// Add piece to board
	BoardMap[x][y] = c;

	// Attempt to modify the position above where the chip was placed
	// This is for re-enabling the button above in the GUI
	if (IsInRange(x - 1, y)) {
		retCoords.first = x - 1;
		retCoords.second = y;
	}

	// Check if this move resulted in a win
	retWin = IsWin(x, y, c);

	// Finally, return coordinate and bool pair
	return make_pair(retCoords, retWin);;
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
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			BoardMap[i][j] = 0;
		}
	}
}

/*
Returns bool - Are the specified coordinates in range of array?
*/
bool Board::IsInRange(int x, int y)
{
	return ((x >= 0) && (x < X_DIM) && (y >= 0) && (y < Y_DIM));
}

/*
Returns bool - Did the passed in coordinates + color result in a win?
*/
bool Board::IsWin(int x, int y, int c)
{
	// TODO
	return false;
}
