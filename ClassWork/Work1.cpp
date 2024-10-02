#include <iostream>
#include <cmath>
#include <windows.h>
#include <random>
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(0));
	int rand_values[15]{};
	for (int i = 0; i < 15; i++) {
		rand_values[i] = rand() % 16 - 5;
	}
	std::cout << "[";
	for (int i = 0; i < 15; i++) {
		std::cout << rand_values[i];
		if (i != 14) {
			std::cout << ", ";
		}
	}
	std::cout << "]\n\n\n";
	return 0;
}
