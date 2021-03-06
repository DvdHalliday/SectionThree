#include <iostream>

//Exercise 6 - Arrays improved!
//Rewrite the previous exercise, but this time only exit the application if the user inputs the ENTER key or when they exceed the max amount of numbers.

//If the user enters any invalid input, tell them that they?ve entered an invalid inputand that they must enter a number.

//If the user just hits ENTER when asked for a number, output the same information as the previous exercise.

//Hint: You?ll need to look up stuff here, too.How would you detect invalid inputand an enter key press.

void printResult(int amountOfItems, int sum) {
	std::cout << std::endl << "Total numbers entered: " << amountOfItems << std::endl << "Total sum of numbers entered: " << sum << std::endl;
}

int main() {
	int numbers[6], sum = 0, size = 0;
	float number;
	for (int i = 0; size < 6; i++) {
		std::cout << "Enter a number if you want or press Enter to finish: ";
		if (std::cin.peek() == '\n') {
			printResult(size, sum);
			return 0;
		}
		std::cin >> number;

		if (!std::cin.good() || (number - floor(number) != 0.0f)) {
			std::cout << std::endl << "Please enter a valid number or press Enter to finish!" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Enter a number if you want or press Enter to finish: ";
			if (std::cin.peek() == '\n') {
				printResult(size, sum);
				return 0;
			}
			std::cin >> number;

			while (!std::cin.good() || (number - floor(number) != 0.0f)) { 
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				std::cout << "Enter a number if you want or press Enter to finish: ";
				if (std::cin.peek() == '\n') {
					printResult(size, sum);
					return 0;
				}
				std::cin >> number;
			}
		}
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		if (size == 5) {
			numbers[5] = number;
			sum += number;
			size++;
			break;
		}
		else {
			numbers[size] = number;
			size++;
			sum += number;
			continue;
		}
	}
	std::cout << "You have filled the array thoroughly." << std::endl;
	std::cout << std::endl << std::endl << "Total numbers entered: " << 6 << std::endl << "Total sum of numbers entered: " << sum << std::endl;
}