#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
string GetGuess();

int main() {
	
	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
		
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

bool AskToPlayAgain(){
	cout << "Do you want to play again? (y/n) ";
	string Response = "";
	getline(cin, Response);
		
	cout << endl;

	return (Response[0] == 'y') || (Response[0] == 'Y');
}

//get a guess from the player
string GetGuess() {
	
	cout << "Enter you Guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}