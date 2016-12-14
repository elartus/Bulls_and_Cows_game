/*This is the console executable, that makes use of BullsCow class
This acts as the view in a MVC pattern, and is responsible for all user interaction. 
For game logic see the FBullCowGame class.*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
FText GetGuess();

FBullCowGame BCGame; // Instantiate a new game

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

	constexpr int32 WORD_LENGHT = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game \n";
	std::cout << "Can you guess the " << WORD_LENGHT;
	std::cout << " letter isogram Im thinking of? \n";
	return;
}

void PlayGame(){
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxtries();
	
	//loop for the number of turns asking for guesses
	//TODO change from FOR to WHILE loop once we are validating tries
	for (int32 i = 1; i <= MaxTries; i++) {
		FText Guess = GetGuess(); //TODO make loop valid guess

		// submit valid guess to the game
		// print number of bulls and cows
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
	//TODO summarise game
}

//get a guess from the player
FText GetGuess() {

	int32 CurrentTry = BCGame.GetCurrentTry();
	
	std::cout << "Try "<< CurrentTry << ". Enter you Guess: ";
	FText Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain(){
	std::cout << "Do you want to play again? (y/n) ";
	FText Response = "";
	std::getline(std::cin, Response);
		
	std::cout << std::endl;

	return (Response[0] == 'y') || (Response[0] == 'Y');
}

