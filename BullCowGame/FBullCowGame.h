#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// all values initialised to zero
struct BullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame {
public:	
	FBullCowGame(); // Constructor

	int32 GetMaxtries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO make a more rich return value.
	bool CheckGuessValidity(FString); //TODO make a more tich return value.	
	BullCowCount SubmitGuess(FString);


private:
	//see constructor for initialisation
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString  MyHiddenWord;

};