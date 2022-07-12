#include <iostream>

int main() {
	float num = 0.0f; 
	int counter = 0;
	std::cout << "Please enter a number between 1-10: ";
	std::cin >> num;
	while (!std::cin.good() || num < 1 || num>9 || (num - floor(num)!=0.0f)) { //This checks if the number is an integer in the given range
		std::cin.clear();
		std::cout << "Please enter a number between 1-10: ";
		std::cin >> num;
		counter++;
	}
	std::string response = (counter > 6) ? "\nJesus goddamn christ, what on earth took you so long to simply get a number like "
		: "\nThat is correct, you succesfully entered: ";
	std::cout << response << num << "\n";
}