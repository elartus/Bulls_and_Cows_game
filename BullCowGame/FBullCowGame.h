#pragma once
#include <string>

class FBullCowGame {
public:	
	int GetMaxtries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO make a more rich return value.
	bool CheckGuessValidity(std::string); //TODO make a more tich return value.


private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;

};