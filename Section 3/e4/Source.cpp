#include <iostream>

int main() {
	std::cout << "Multiples of 10:" << std::endl;
	int sum = 0;
	for (int i = 10; i < 101; i+=10) {
		if (i % 10 == 0) {
			std::cout << i << " ";
			continue;
		}
		sum += i;
	}
	std::cout << std::endl;
}