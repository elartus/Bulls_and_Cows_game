#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

int main() {
	
	PrintIntro();
	GetGuessAndPrintBack();
	GetGuessAndPrintBack();
		
	cout << endl;
	return 0;


}

//introduce the game
void PrintIntro() {

	constexpr int WORLD_LENGHT = 5;
	cout << "Welcome to Bulls and Cows, a fun word game \n";
	cout << "Can you guess the " << WORLD_LENGHT;
	cout << " letter isogram I´m thinking of? \n";
	return;
}

//get a guess from the player
string GetGuessAndPrintBack() {
	
	cout << "Enter you Guess: ";
	string Guess = "";
	getline(cin, Guess);

	//print the guess back
	cout << "Your guess was: " << Guess << endl;

	return Guess;
}