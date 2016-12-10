#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
std::string GetGuess();

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
	std::cout << "Welcome to Bulls and Cows, a fun word game \n";
	std::cout << "Can you guess the " << WORLD_LENGHT;
	std::cout << " letter isogram I´m thinking of? \n";
	return;
}

void PlayGame(){

	FBullCowGame BCGame; // Instantiate a new game
	//loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++) {
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

bool AskToPlayAgain(){
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);
		
	std::cout << std::endl;

	return (Response[0] == 'y') || (Response[0] == 'Y');
}

//get a guess from the player
std::string GetGuess() {
	
	std::cout << "Enter you Guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}