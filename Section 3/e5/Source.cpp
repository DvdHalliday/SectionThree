#include <iostream>

int main() {
	int numbers[6], sum=0;
	float number;
	for (int i = 0; i < 6; i++) {
		std::cout << "Enter a number if you want: ";
		std::cin >> number;
		if (!std::cin.good() || (number - floor(number) != 0.0f)) {
			std::cout  << std::endl << "Total numbers entered: " << i << std::endl << "Total sum of numbers entered: " << sum << std::endl;
			return 0;
		}
		numbers[i] = number;
		sum += number;
	}
	std::cout << "You have filled the array thoroughly." << std::endl;
	std::cout << std::endl << std::endl << "Total numbers entered: " << 6 << std::endl << "Total sum of numbers entered: " << sum << std::endl;
}