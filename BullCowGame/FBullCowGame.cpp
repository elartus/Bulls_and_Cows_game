#include "FBullCowGame.h"

int FBullCowGame::GetMaxtries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }


void FBullCowGame::Reset()
{
	return;
}


bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
