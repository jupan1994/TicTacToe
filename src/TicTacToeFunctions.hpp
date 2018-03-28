#include <iostream>
#include <string>

#include "TicTacToeClasses.hpp"

using namespace std;

void GetName(string &player1, string &player2);
void PrintBoard(Board board);
void GetPosition(int &x, int &y);
void DeclareTheWinner(int winner);

void GetName(string &player1, string &player2) {
	cout << "Please enter player1's name: " << endl;
	getline(cin, player1);
	cout << "Please enter player2's name: " << endl;
	getline(cin, player2);
	cout << "Welcome, " << player1 << " and " << player2 << "!" << endl;
}

void PrintBoard(Board board) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << board.GetVal(i, j) << " ";
		}
		cout << endl;
	}
}

void GetPosition(int &x, int &y) {
	cout << "Enter the position you want to insert: " << endl;
	cout << "x: ";
	cin >> x;
	cout << "\ny: ";
	cin >> y;
	cout << "The position you choose is: (" << x << ", " << y << ")" << endl;
}

void DeclareTheWinner(int winner) {
	if (winner == 1) {
		cout << "The Winner Is Player1 :)" << endl;
	} else if (winner == 2) {
		cout << "The Winner Is Player2 :)" << endl;
	} else if (winner == -1) {
		cout << "No Winner... :)" << endl;
	}
}
