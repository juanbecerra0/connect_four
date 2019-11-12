#include "Board.h"

int BoardMap[7][6];

Board::Board(void)
{
	InitializeGame();
	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 6; j++) {
			cout << BoardMap[i][j];
			
		}
	}
}

void Board::AddPiece(int x, int y, int color)
{
	throw gcnew System::NotImplementedException();
}

void Board::NewGame(void)
{
	throw gcnew System::NotImplementedException();
}

void Board::ExitGame(void)
{
	throw gcnew System::NotImplementedException();
}

void Board::InitializeGame(void)
{
	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 6; j++) {
			BoardMap[i][j] = 0;
		}
	}
}
