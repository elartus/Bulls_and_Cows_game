#include <iostream>
#include <string>

using namespace std;

int main() {
	//introduce the game
	constexpr int WORLD_LENGHT = 5;
	cout << "Welcome to Bulls and Cows, a fun word game \n";
	cout << "Can you guess the " << WORLD_LENGHT;
	cout << " letter isogram I�m thinking of? \n";

	//get a guess from the player
	string Guess = "";
	cout << "Guess: ";	
	cin >> Guess;
	
	//repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;

	//get a guess from the player
	cout << "Guess: ";
	cin >> Guess;

	//repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;

	cout << endl;
	return 0;
}