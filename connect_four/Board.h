#pragma once

#include <iostream>
#include <string>

using namespace std;

ref class Board
{
public:
	Board(void);
	std::pair<std::pair<int, int>, bool> AddPiece(int x, int y, int c);
	void NewGame(void);
private:
	void InitializeGame(void);
	bool IsInRange(int x, int y);
	bool IsWin(int x, int y, int c);
};

