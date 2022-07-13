#include <iostream>

int main() {
	int lotteryResults[5], lotteryBet[5], winnings = 0;
	std::srand(std::time(0));
	std::cout << "Welcome to the lottery!\n";
	for (int i = 0; i < 5; i++) {
		lotteryResults[i] = (rand() % 20) + 1;
		float guess;
		std::cout << "Please enter entry #" << i + 1 << " (1-20): ";
		std::cin >> guess;
		while (!std::cin.good() || guess < 1 || guess>20 || (guess - floor(guess) != 0.0f)) { //This checks if the guessber is an integer in the given range
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Please enter entry #" << i + 1 << " (1-20): ";
			std::cin >> guess;
		}
		lotteryBet[i] = guess;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
	std::cout << "\nLottery results ";
	for (int i = 0; i < 5; i++) {
		if (lotteryResults[i] == lotteryBet[i]) winnings += 10;
		std::cout << lotteryResults[i] << " ";
	}
	std::cout << "\nYour winnings: $" << winnings;
}