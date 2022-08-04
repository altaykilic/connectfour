#pragma once

// Pair is a specialized int pair

class Pair{
public:
	int x, y;
	
	Pair(int a, int b) : x(a), y(b){}
	
	Pair& operator=(const Pair& p);
	bool operator==(const Pair& p) const;
	bool operator!=(const Pair& p) const;
};

#include "Pair.cpp"
