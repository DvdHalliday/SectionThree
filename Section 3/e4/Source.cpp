#include <iostream>

//Exercise 4 - More Multiples of 10
//Rewrite the previous program, but this time loop just outputs the multiples of 10, no need to output the sum of the rest of the numbers.
//This time you can only use one for loopand it should not loop more than 10 times.


int main() {
	std::cout << "Multiples of 10:" << std::endl;
	for (int i = 10; i < 101; i+=10) {
		if (i % 10 == 0) {
			std::cout << i << " ";
			continue;
		}
	}
	std::cout << std::endl;
}