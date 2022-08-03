#pragma once

class AI{
private:
	char _sym[3];
	
public:
	void setup(char, char, char);
	int make_move();
};

#include "AI.cpp"
