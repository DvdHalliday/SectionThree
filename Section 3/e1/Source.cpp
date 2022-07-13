#include <iostream>

//Exercise 1 - Input Validation
//Write a program that will ask the user to enter a number between 1 - 10. Keep asking the same question until a valid input is given.Add an annoyed comment if they take more than a certain number of tries.
//Hint: We haven’t seen anything about input validation, this is a good chance to look up something you don’t know by yourself.See where google takes you.

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