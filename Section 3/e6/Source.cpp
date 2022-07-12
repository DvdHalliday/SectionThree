#include <iostream>

int entered(int items, int sum) {
	std::cout << std::endl << "Total numbers entered: " << items << std::endl << "Total sum of numbers entered: " << sum << std::endl;
	return 0;
}

int main() {
	int numbers[6], sum = 0;
	float number;
	for (int i = 0; i < 6; i++) {
		std::cout << "Enter a number if you want or press Enter to finish: ";
		if (std::cin.peek() == '\n') return entered(i, sum);
		std::cin >> number;

		if (!std::cin.good() || (number - floor(number) != 0.0f)) {
			std::cout << std::endl << "Please enter a valid number or press Enter to finish!";
			std::cin.clear();
			std::cout << "Enter a number if you want or press Enter to finish: ";
			if (std::cin.peek() == '\n') return entered(i, sum);
			std::cin >> number;

			while (!std::cin.good() || (number - floor(number) != 0.0f)) { 
				std::cin.clear();
				std::cout << "Enter a number if you want or press Enter to finish: ";
				if (std::cin.peek() == '\n') return entered(i, sum);
				std::cin >> number;
			}
			if (std::cin.peek() == '\n') return entered(i, sum);
		}
		std::cin.clear();
		numbers[i] =
			sum += number;
	}
	std::cout << "You have filled the array thoroughly." << std::endl;
	std::cout << std::endl << std::endl << "Total numbers entered: " << 6 << std::endl << "Total sum of numbers entered: " << sum << std::endl;
}