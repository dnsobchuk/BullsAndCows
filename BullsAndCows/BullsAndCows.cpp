// BullsAndCows.cpp : simple game
//

#include "pch.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	// Init hidden numbers
	vector<int> vect{ 1, 3, 5, 2 };
	int input;
	int game = true;

	while (game) {
		int bulls = 0;
		int cows = 0;
		int degree = 1000;
		cout << "Please enter 4 numbers 0-9 like(8435): ";
		cin >> input;
		for (int i = 0; i <= 3; i++) {
			if (input / degree % 10 == vect[i]) bulls++;
			else if (input / 100 % 10 == vect[i] || input / 10 % 10 == vect[i] || input % 10 == vect[i]) cows++;
			degree /= 10;
		}
		cout << "Bulls = " << bulls << ", and cows = " << cows << endl;
		if (bulls == 4 and cows == 0) {
			game = false;
			bulls = cows = input = 0;
			vect.clear();
			cout << "You win! Thank's for game.\n";
		}
	}
	getchar();
}
