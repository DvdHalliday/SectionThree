#include <iostream>

//Exercise 7 - Lottery
//Write a program that will simulate the lottery.Create two arrays of 5 integers.The first array should be populated with 5 random numbers from 1 - 20. For the second array, ask the user to input 5 numbers from 1 - 20. Make sure to handle invalid input and make sure numbers are not repeated.

//For each number that is matched in the same index, give the user $10.


int main() {
	int lotteryResults[5], lotteryBet[5], winnings = 0;
	std::srand(std::time(0));
	std::cout << "Welcome to the lottery!\n";
	for (int i = 0; i < 5; i++) {
		lotteryResults[i] = (rand() % 20) + 1;
		float guess;
		std::cout << "Please enter entry #" << i+1 << " (1-20): ";
		std::cin >> guess;
		while (!std::cin.good() || guess < 1 || guess>20 || (guess - floor(guess) != 0.0f)) { //This checks if the guessber is an integer in the given range
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Please enter entry #" << i+1 << " (1-20): ";
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