#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Board {
	private:
		char board[4][4];
		// record player1
		int row_player_1[4];
		int col_player_1[4];
		int diagonal_player_1[2];
		// record player2
		int row_player_2[4];
		int col_player_2[4];
		int diagonal_player_2[2];

	public:
		Board();
		void SetVal(int x, int y, char val);
		char GetVal(int x, int y);
		int CheckWinner();
};

Board::Board() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			board[i][j] = '-';
		}
	}
}

void Board::SetVal(int x, int y, char val) {
	board[x][y] = val;
	if (val == 'x') {
		row_player_1[x]++;
		col_player_1[y]++;
		if (x == y) {
			diagonal_player_1[0]++;
		} else if (x == -y) {
			diagonal_player_1[1]++;
		}
	} else if (val == 'o') {
		row_player_2[x]++;
		col_player_2[y]++;
		if (x == y) {
			diagonal_player_2[0]++;
		} else if (x == -y) {
			diagonal_player_2[1]++;
		}
	}
}

char Board::GetVal(int x, int y) {
	return board[x][y];
}

int Board::CheckWinner() {
	for (int i = 0; i < 4; i++) {
		if (row_player_1[i] == 4 || col_player_1[i] == 4)
			return 1;
		if (row_player_2[i] == 4 || col_player_2[i] == 4)
			return 2;
		if (i < 2) {
			if (diagonal_player_1[i] == 4)
				return 1;
			if (diagonal_player_2[i] == 4)
				return 2;
		}
	}
	return -1;
}
