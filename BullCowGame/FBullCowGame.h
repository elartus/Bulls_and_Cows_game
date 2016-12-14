#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:	
	FBullCowGame(); // Constructor

	int32 GetMaxtries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO make a more rich return value.
	bool CheckGuessValidity(FString); //TODO make a more tich return value.
	//provide a method for counting bulls & cows, and increasing try #


private:
	//see constructor for initialisation
	int32 MyCurrentTry;
	int32 MyMaxTries;

};