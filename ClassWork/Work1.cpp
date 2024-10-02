#include <iostream>
#include <cmath>
#include <windows.h>
#include <random>
#include <cstdlib>
#include <ctime>


int main() {
	srand(time(0));

	int rand_values[10]{}, input_values[10]{}, goals = 0, value = -1;

	for (int i = 0; i < 10; i++) {
		rand_values[i] = rand() % 11;
	}
	
	
	for (int i = 0; i < 10; i++) {
		do {
			std::cin >> input_values[i];
			if (input_values[i] < 0 || input_values[i] > 10) {std::cout << "\nYou wrote the wrong value, it must be between 0 and 10 inclusive\n";}
		} while (input_values[i] >= 0 || input_values[i] <= 10);
	}
	for (int i = 0; i < 10; i++) {
		if (rand_values[i] == input_values[i]) {
			goals += 1;
		}
	}
	if (goals == 0) {
		std::cout << "\nI'm sorry, all of them are wrong\n";
	}
	else if (goals == 1) {
		std::cout << "\nCongrats! There's one coincidence, you won\n";
	}
	else if (goals == 2) {
		std::cout << "\nYou got the big win! There's two coincidences!\n";
	}
	else if (goals == 3) {
		std::cout << "\nThree matches! Jackpot!\n";
	}
	else {
		std::cout << "\nMore than 3 matches! You are a monster!!\n";
	}
	return 0;
}
