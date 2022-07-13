#include <iostream>

void stringReverser(char originalString[],char newString[]) {
	for (int i = 0; i < std::strlen(originalString); i++) {
		newString[std::strlen(originalString) - i -1] = originalString[i];
	}
	newString[std::strlen(originalString)] = '\0';
}

int main() {
	char doubleQuotes[30] = "This is not an INTERVENTION!", singleChars[30] = { 'B','l','e','e','d','i','n','\'',' ','C','+','+','\0'}, reversedDouble[30], reversedSingle[30];
	std::cout << "Strings are just arrays of characters. In c++, there’s a number of ways you can initialize them, here’s two of them:\n" << std::endl;
	std::cout << "1. My string initialized with double quotes is: " << doubleQuotes << std::endl;
	stringReverser(doubleQuotes, reversedDouble);
	std::cout << "This string reversed is: " << reversedDouble << std::endl;
	std::cout << "\n2. My string initialized with single characters is: " << singleChars << std::endl;
	stringReverser(singleChars, reversedSingle);
	std::cout << "This string reversed is: " << reversedSingle << std::endl;
}