#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame(){Reset();}

int32 FBullCowGame::GetMaxtries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }


void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	
	return;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}

//receives a VALID guess, increments turn, and return count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	//increment the turn number
	MyCurrentTry++;
	//setup a return variable

	BullCowCount BullCowCount;
	//loop through all letters in the guess
		//copare letters againts the hidden word

	return BullCowCount;
}


bool FBullCowGame::IsGameWon() const
{
	return false;
}

