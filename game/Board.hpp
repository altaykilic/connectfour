#pragma once

#include <ostream>

class Board{
private:
	char _board[7][6];
	bool _turn;
	int _moves;
	
	bool _win_check(bool) const;
	
public:
	Board();
	
	bool get_turn() const;
	char get(int, int) const;
	char** get_board() const;
	short drop(int);
	
	void print();
};

#include "Board.cpp"
