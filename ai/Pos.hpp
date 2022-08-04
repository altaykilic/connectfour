#pragma once

class Pos{
public:
	bool turn;
	char board[7][6];
	Pos* parent;
	Pos* child[7];
	
	Pos* make(int);
	
	// I did not
}

#include "Pos.cpp"
