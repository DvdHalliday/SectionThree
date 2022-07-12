#include <iostream>

int grader(bool test) {//If the answer to the question is 0, add a ! before the bool when calling this function
	std::string response = (test) ? "CORRECT! Looks like you have common sense." : "WRONG! How could you miss that??";
	std::cout << response << "\n" << std::endl;
	return (test) ? 1 : 0;
}

int questioner(int index, std::string question) {
	char answer;
	int counter = 0;
	do {
		std::cout << "Question " << index << ": " << question << " ";
		std::cin.clear();
		std::cin >> answer;
		counter++;
		if (!std::cin.good() || (answer != 'T' && answer != 'F')) {
			switch (counter) {
			case 3:
				std::cout << "That's it, you get a 0.\n\n";
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				return 0;
			case 2:
				std::cout << "Do not mess with me. Please answer T or F or you'll get an automatic 0!!\n\n";
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				continue;
			case 1:
				std::cout << "Woah... did you forget how to type? Please answer T or F\n\n";
				std::cin.ignore(INT_MAX, '\n');
				continue;
			}
		}
	} while (!std::cin.good() || (answer != 'T' && answer != 'F'));
	return grader((answer == 'T') ? 1 : 0);
}

int main() {
	int grade = 0;
	std::cout << "Welcome to your quiz! Answer T or F\n\n";
	grade += questioner(1, "Are avocados fruits?");
	grade += questioner(2, "Is the sky blue?");
	grade += questioner(3, "Is Teravision the Best.Team.Ever?");
	std::cout << "You got " << grade << "/3 correct answers! Your final grade is: " << grade * 5 / 3.0f << std::endl;
}