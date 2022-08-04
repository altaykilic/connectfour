Pair& Pair::operator=(const Pair& p){
	x = p.x;
	y = p.y;
	return *this;
}

bool Pair::operator==(const Pair& p) const {
	return (x == p.x && y == p.y);
}

bool Pair::operator!=(const Pair& p) const {
	return (x != p.x || y != p.y);
}
