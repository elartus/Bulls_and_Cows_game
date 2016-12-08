#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

int main() {
	
	PrintIntro();
	
	//loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++) {
		GetGuessAndPrintBack();
		cout << endl;
	}
		
	cout << endl;
	return 0;


}

//introduce the game
void PrintIntro() {

	constexpr int WORLD_LENGHT = 5;
	cout << "Welcome to Bulls and Cows, a fun word game \n";
	cout << "Can you guess the " << WORLD_LENGHT;
	cout << " letter isogram I´m thinking of? \n";
	return;
}

//get a guess from the player
string GetGuessAndPrintBack() {
	
	cout << "Enter you Guess: ";
	string Guess = "";
	getline(cin, Guess);

	//print the guess back
	cout << "Your guess was: " << Guess << endl;

	return Guess;
}