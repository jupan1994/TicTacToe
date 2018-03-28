//============================================================================
// Name        : TicTacToe.cpp
// Author      : Ju Pan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "TicTacToeFunctions.hpp"

int main() {
	string player1, player2;
	bool toggle = true;
	Board board;
	int count = 0;

	GetName(player1, player2);

	while (count < 16) {
		cout << "***** Round " << count + 1 << " *****" << endl;
		PrintBoard(board);
		int x, y;
		GetPosition(x, y);
		if (toggle)
			board.SetVal(x, y, 'x');
		else
			board.SetVal(x, y, 'o');
		if (board.CheckWinner() == 1) {
			PrintBoard(board);
			DeclareTheWinner(1);
			return 0;
		} else if (board.CheckWinner() == 2) {
			PrintBoard(board);
			DeclareTheWinner(2);
			return 0;
		}
		toggle = !toggle;
		PrintBoard(board);
		count++;
	}
	DeclareTheWinner(-1);
	return 0;
}
