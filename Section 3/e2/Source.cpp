#include <iostream>

//Exercise 2 - More Input Validation
//Rewrite the true or false quiz you did in the previous section.This time, instead of asking for 1 or 2 as inputs, ask them to answer T or F.If they enter invalid input, give them a couple of tries before you automatically fail them.


int getAwardedPointsFromAnswer(bool isCorrectAnswer, bool actualAnswer) {
	std::string response = (isCorrectAnswer == actualAnswer) ? "CORRECT! Looks like you have common sense." : "WRONG! How could you miss that??";
	std::cout << response << "\n" << std::endl;
	return (isCorrectAnswer == actualAnswer) ? 1 : 0;
}

int getPointsFromQuestion(int index, std::string question, bool actualAnswer) {
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
	return getAwardedPointsFromAnswer(answer == 'T', actualAnswer);
}

int main() {
	int grade = 0;
	std::cout << "Welcome to your quiz! Answer T or F\n\n";
	grade += getPointsFromQuestion(1, "Are avocados fruits?", true);
	grade += getPointsFromQuestion(2, "Is the sky blue?", true);
	grade += getPointsFromQuestion(3, "Is Teravision the Best.Team.Ever?", true);
	std::cout << "You got " << grade << "/3 correct answers! Your final grade is: " << grade * 5 / 3.0f << std::endl;
}