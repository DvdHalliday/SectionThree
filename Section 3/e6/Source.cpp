#include <iostream>

int entered(int items, int sum) {
	std::cout << std::endl << "Total numbers entered: " << items << std::endl << "Total sum of numbers entered: " << sum << std::endl;
	return 0;
}

int main() {
	int numbers[6], sum = 0, size = 0;
	float number;
	for (int i = 0; size < 6; i++) {
		std::cout << "Enter a number if you want or press Enter to finish: ";
		if (std::cin.peek() == '\n') return entered(size, sum);
		std::cin >> number;

		if (!std::cin.good() || (number - floor(number) != 0.0f)) {
			std::cout << std::endl << "Please enter a valid number or press Enter to finish!" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Enter a number if you want or press Enter to finish: ";
			if (std::cin.peek() == '\n') return entered(size, sum);
			std::cin >> number;

			while (!std::cin.good() || (number - floor(number) != 0.0f)) { 
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				std::cout << "Enter a number if you want or press Enter to finish: ";
				if (std::cin.peek() == '\n') return entered(size, sum);
				std::cin >> number;
			}
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
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				continue;
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