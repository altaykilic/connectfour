Board::Board(){
	for(int i=0; i<7; i++){
		for(int j=0; j<6; j++){
			_board[i][j] = '0';
			_turn = 0;
			_moves = 0;
		}
	}
}

bool Board::get_turn() const {
	return _turn;
}

char Board::get(int x, int y) const {
	return _board[x][y];
}

// return 0 -> fail
// return 1 -> success
// return 2 -> success, game ended
short Board::drop(int col){
	if(col < 0 || col > 6)
		return 1;
	for(int i=0; i<6; i++){
		if(_board[col][i] == '0'){
			_board[col][i] = (_turn ? '2' : '1');
			_moves++;
			
			if(_win_check(_turn)){
				std::cout << _turn + 1 << " wins\n";
				return 2;
			}
			if(_moves == 42){
				std::cout << "draw\n";
				return 2;
			}
			
			_turn = !_turn;
			
			return 0;
		}
	}
	return 1;
}

void Board::print(){
	for(int j=5; j>=0; j--){
		for(int i=0; i<7; i++){
			std::cout << _board[i][j];
		}
		std::cout << '\n';
	}
}

bool Board::_win_check(bool pl) const {
	char c = (pl ? '2' : '1');
	
	//verticals check
	for(int i=0; i<7; i++){
		for(int j=0; j<3; j++){
			if(_board[i][j] == c && _board[i][j+1] == c && _board[i][j+2] == c && _board[i][j+3] == c)
				return 1;
		}
	}
	
	//horizontals check
	for(int i=0; i<4; i++){
		for(int j=0; j<6; j++){
			if(_board[i][j] == c && _board[i+1][j] == c && _board[i+2][j] == c && _board[i+3][j] == c)
				return 1;
		}
	}
	
	//diagonals check (1)
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			if(_board[i][j] == c && _board[i+1][j+1] == c && _board[i+2][j+2] == c && _board[i+3][j+3] == c)
				return 1;
		}
	}
	
	//diagonals check (2)
	for(int i=3; i<7; i++){
		for(int j=0; j<3; j++){
			if(_board[i][j] == c && _board[i-1][j+1] == c && _board[i-2][j+2] == c && _board[i-3][j+3] == c)
				return 1;
		}
	}
	
	return 0;
}
