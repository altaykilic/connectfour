#pragma once

#include "Pos.hpp"

class AI{
private:
	char _sym[3];
	int _depth;
	Pos _cur;
	
public:
	void setup(char, char, char);
	int make_move(char**) const;
};

#include "AI.cpp"
