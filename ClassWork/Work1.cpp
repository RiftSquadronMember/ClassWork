#include <iostream>
#include <cmath>
#include <windows.h>
#include <random>
#include <cstdlib>
#include <ctime>

const int num_array_size = 20;

int random_values() {return rand() % 27 - 8;}


int min_max_search(int num_array[num_array_size], char type_of) {
	int min = num_array[0], max = num_array[0];
	for (int i = 0; i < num_array_size; i++) {
		if (num_array[i] > max) { max = num_array[i]; }
		if (num_array[i] < min) { min = num_array[i]; }
	}
	if (type_of == '<') { return min; }
	if (type_of == '>') { return max; }
}

void array_out(int num_array[num_array_size]) {
	for (int i = 0; i < num_array_size; i++) {
		std::cout << num_array[i];
		if (i < num_array_size - 1) { std::cout << ", "; }
	}
}





int main() {
	srand(time(0));
	int num_array[num_array_size]{};
	
	for (int i = 0; i < num_array_size; i++) {
		num_array[i] = random_values();
	}

	array_out(num_array);

	std::cout <<"\n\n minimum: " << min_max_search(num_array, '<');
	std::cout << "\n maximum: " << min_max_search(num_array, '>');


	std::cout << "\n\n\n";

	return 0;
}
