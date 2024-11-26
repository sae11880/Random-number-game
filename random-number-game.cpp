//The goal is to create a game that generates a number and then allows you to guess it
//if you guess to high it will tell you so, as well as if you guess too low

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	// creating the generation code 
	std::srand(static_cast<unsigned int>(std::time(0)));
	int random_number = std::rand() % 1000000000 + 1; 
	int guess = 0;


	std::cout << "I have generated a random number. Can you guess what it is?" << std::endl;
	while (true) {
		std::cout << "Enter your guess: ";
		std::cin >> guess; if (guess > random_number) {
			std::cout << "Your number is too high, please try again! you have unlimted attempts!" << std::endl;
		}
		else if (guess < random_number) {
			std::cout << "Your number is too low, please try again! you have unlimted attempts!." << std::endl;
		}
		else {
			std::cout << "Way to go smarty! you go it right! the number was : " << random_number << std::endl;
			break;
		}
	}
	return 0;
}