#include <iostream>
#include <cmath>
#include <windows.h>
#include <random>
#include <cstdlib>
#include <ctime>

void add(float a, float b) {
	std::cout << a << " + " << b << " = " << a + b;
}

void subtract(float a, float b) {
	std::cout << a << " - " << b << " = " << a - b;
}

void divide(float a, float b) {
	if (a == 0 || b == 0) {
		std::cout << "Error, zero can't be divided\nor something can not be divided by zero";}
	else {
		std::cout << a << " / " << b << " = " << a / b;
	}
}

void multiply(float a, float b) {
	std::cout << a << " * " << b << " = " << a * b;
}



void percent(float a, float b) {
	std::cout << a << " % - " << b << " = "<<  (a * (b / 100));
}

int main() {
	float num_a = 0, num_b = 0;
	char main_operator = ' ';
	std::cout << "Enter the first value\n>>> ";
	std::cin >> num_a;
	system("cls");
	do {
		std::cout << "Enter the operator\n>>> ";
		std::cout << num_a << " ";
		std::cin >> main_operator;
		system("cls");
	} while (
		main_operator != '+' && 
		main_operator != '-' &&
		main_operator != '/' &&
		main_operator != '*' &&
		main_operator != '%');

	if (main_operator != '%') {
		std::cout << "Enter the second value\n>>> ";
	}
	else{
		std::cout << "Enter the percents of the first value[from 1 to 100]\n>>> ";
	}
	std::cout << num_a << " " << main_operator << " ";
	std::cin >> num_b;
	system("cls");
	

	if (main_operator == '+') { add(num_a, num_b); }
	else if (main_operator == '-') { subtract(num_a, num_b); }
	else if (main_operator == '/') { divide(num_a, num_b); }
	else if (main_operator == '*') { multiply(num_a, num_b); }
	else if (main_operator == '%') { percent(num_a, num_b); }
	std::cout << "\n\n\n";
}
