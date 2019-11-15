#include "Board.h"

const int X_DIM = 7;
const int Y_DIM = 6;

int BoardMap[X_DIM][Y_DIM];

Board::Board(void)
{
	InitializeGame();
}

System::String^ Board::GetBoardData(void) {
	System::Text::StringBuilder sb;

	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 6; j++) {
			sb.Append(i + ", " + j + ": " + BoardMap[i][j] + "\n");
		}
	}

	return sb.ToString();
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
			// TODO change button characteristics
		}
	}
}

bool Board::IsInRange(int x, int y)
{
	return (x >= 0) && (x < X_DIM) && (y >= 0) && (y < Y_DIM);
}
