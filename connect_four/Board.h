#pragma once

#include "connectFourGUI.h"
#include <iostream>

using namespace std;

ref class Board
{
public:
	Board(void);

	void AddPiece(int x, int y, int color);
	void NewGame(void);
	void ExitGame(void);
private:
	void InitializeGame(void);
};

