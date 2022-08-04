#include <iostream>
#include "game\Board.hpp"
#include "ai\AI.hpp"

int main(){	
	Board board;
	board.print();
	
	AI ai;
	ai.setup('0', '1', '2', board.get_board);
	
	char c;
	while(1)
	{
		std::cin >> c;
		if(c == '0')
			break;
		if(c == 'x'){
			std::cout << "ai stuff\n"; /*
			ai.move(); /**/
		}
		c -= 49;
		
		int res = board.drop(c);
		
		if(res == 1){
			continue;
		}
		if(res == 2){
			break;
		}
		
		system("cls");
		board.print();
	}
	
	return 0;
}
