#include <iostream>

//Exercise 5 - Arrays
//Create an array of whatever size you want.Let the user input as many numbers as they want and populate the array with them.If they enter any invalid input, output the whole array of numbersand the sum of them alland the total numbers they input.
//If the user exceeds the size of your array, tell them about itand then output the information.


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