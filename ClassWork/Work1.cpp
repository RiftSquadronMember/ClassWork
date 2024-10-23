#include <iostream>
#include <cmath>
#include <windows.h>
#include <random>
#include <cstdlib>
#include <ctime>
#include <vector>



template <typename num_array, typename answr_type>

int cout_arr(int size,  num_array array1[], answr_type num_type) {
	num_type = 0;
	float size_to_use = size;
	std::cout << "\n\nArray: ";
	for(int i = 0; i < size_to_use; i++){
		std::cout << array1[i] << "   ";
		num_type += array1[i];
	}
	std::cout << "\nMid_value: ";
	return (num_type / size_to_use);
}



int main() {
	const int arr_size = 5;
	int num_int[arr_size]{1,2,3,4,5};
	float num_float[arr_size]{ 123.5f,83.8f,53.6f,23.3f,13.4f };
	double num_double[arr_size]{ 123.5f,83.8f,53.6f,23.3f,13.4f };
	std::cout << cout_arr(arr_size, num_int, num_int[0]);
	std::cout << cout_arr(arr_size, num_float, num_float[0]);
	std::cout << cout_arr(arr_size, num_double, num_double[0]);
	return 0;
}
