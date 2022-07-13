#include <iostream>
#include <array>

//Exercise 8 - Easier Lottery
//Rewrite the previous lottery but now instead of getting $10 for each number matched in the exact same index, give the user $10 for any number that matches anywhere in the sequence.

bool isElementInArray(int element, int array[], int size){
	return std::find(array, array+size, element) != array + size;
}

int main() {
	int lotteryResults[5], lotteryBet[5], winnings = 0, temporaryLotteryResult;
	std::srand(std::time(0));
	std::cout << "Welcome to the lottery!\n";
	for (int i = 0; i < 5; i++) {
		do {
			temporaryLotteryResult = (rand() % 20) + 1;
		} while (isElementInArray(temporaryLotteryResult, lotteryResults, i));
		lotteryResults[i] = temporaryLotteryResult;
		float temporaryLotteryGuess;
		std::cout << "Please enter entry #" << i + 1 << " (1-20): ";
		std::cin >> temporaryLotteryGuess;
		while (!std::cin.good() || temporaryLotteryGuess < 1 || temporaryLotteryGuess>20 || (temporaryLotteryGuess - floor(temporaryLotteryGuess) != 0.0f) || isElementInArray(temporaryLotteryGuess, lotteryBet, i)) { //This checks if the guessber is an integer in the given range
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Please enter entry #" << i + 1 << " (1-20): ";
			std::cin >> temporaryLotteryGuess;
		}
		lotteryBet[i] = temporaryLotteryGuess;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
	std::cout << "\nLottery results ";
	for (int i = 0; i < 5; i++) {
		if (isElementInArray(lotteryBet[i],lotteryResults, 5)) winnings += 10;
		std::cout << lotteryResults[i] << " ";
	}
	std::cout << "\nYour winnings: $" << winnings;
}