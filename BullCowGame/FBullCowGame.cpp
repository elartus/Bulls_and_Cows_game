#include "FBullCowGame.h"

int FBullCowGame::GetMaxtries() { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() { return MyCurrentTry; }


void FBullCowGame::Reset()
{
	return;
}


bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
