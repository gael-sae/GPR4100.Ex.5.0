#include <iostream>
#include <array>
#include <time.h>


int choise(int userInput) {
	if (userInput == 0) {
		std::cout << "The player use paper\n";
	}
	if (userInput == 1) {
		std::cout << "The player use scisor\n";
	}
	if (userInput == 2) {
		std::cout << "The player use stone\n";
	}
	return userInput;
}

int main() {

	bool isRunning = true;
	const int paper = 0;
	const int scisor = 1;
	const int stone = 2;
	int sizeAction = 3;
	int userInput;
	int round = 0;
	int playerWin = 0;
	int consoleWin = 0;

	srand(time(NULL));

	std::cout << "Paper = 0, scisor = 1, stone = 2\n";
		
		
	while (isRunning == true) {
		round++;
		std::cout << "round : " << round << "\n";

		std::cin >> userInput;
		userInput = choise(userInput);

		int random_number = rand() % sizeAction;

		if (userInput > 2) {
			std::cout << "wrong number !\n";
		}

		else if (random_number == 0) {
			std::cout << "The console use paper\n";
		}

		else if (random_number == 1) {
			std::cout << "The console use scisor\n";
		}

		else if (random_number == 2) {
			std::cout << "The console use stone\n";
		}

		if (random_number == 0 && userInput == 1 || random_number == 1 && userInput == 2 || random_number == 2 && userInput == 0) {
			std::cout << "The playeur win !\n";
			std::cout << "\n";
			playerWin++;
		}

		if (random_number == 0 && userInput == 2 || random_number == 1 && userInput == 0 || random_number == 2 && userInput == 1) {
			std::cout << "The console win !\n";
			std::cout << "\n";
			consoleWin++;
		}

		if (random_number == userInput) {
			std::cout << "Draw !\n";
			std::cout << "\n";
		}

		if (consoleWin == 3) {
			std::cout << "\n";
			std::cout << "The console as win the game !\n";
			isRunning = false;
		}
		if (playerWin == 3){
			std::cout << "\n";
				std::cout << "the player as win the game !\n";
				isRunning = false;
			}

		
	}

	


	system("pause");
	return 0;
}