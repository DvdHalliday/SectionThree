#include <iostream>

//Exercise 3 - Multiples of 10
//Write a program that will output multiples of 10 between 1 and 100. Use a for - loop that goes through numbers 1 - 100.
//At the end of the program, output the sum of all the numbers that were NOT multiples of 10. Do NOT use an else statement for this programand do NOT use more than one loop.


int main() {
	std::cout << "Multiples of 10:" << std::endl;
	int sum = 0;
	for (int i = 1; i < 101; i++) {
		if (i % 10 == 0) {
			std::cout << i << " ";
			continue;
		}
		sum += i;
	}
	std::cout << std::endl << std::endl << "Sum of the rest of numbers: " << sum << std::endl;
}