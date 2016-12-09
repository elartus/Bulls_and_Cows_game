#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

int main() {
	
	PrintIntro();	
	PlayGame();
	return 0; //Exit Aplication
}

//introduce the game
void PrintIntro() {

	constexpr int WORLD_LENGHT = 5;
	cout << "Welcome to Bulls and Cows, a fun word game \n";
	cout << "Can you guess the " << WORLD_LENGHT;
	cout << " letter isogram I´m thinking of? \n";
	return;
}

void PlayGame()
{
	//loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++) {
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}

//get a guess from the player
string GetGuess() {
	
	cout << "Enter you Guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}