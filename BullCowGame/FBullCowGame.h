#pragma once

class FBullCowGame {
public:
	void Reset(); //TODO make a more rich return value.
	int GetMaxtries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(string); //TODO make a more tich return value.


private:
	int MyCurrentTry;
	int MyMaxTries;

};