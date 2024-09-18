#include <iostream>
#include <cmath>
#include <windows.h>
#include <random>
#include <cstdlib>
#include <ctime>

int main() {
	int user_choice;
	bool choice_was_made = false;
	char code_completed;



	std::cout << "hello world" << std::endl;

	while (choice_was_made != true) {
		std::cout << "Insert number of programm\nthat u want to start:\n\n1 - Randomiser\n2 - Simple calculator\n3 - Shop\n4 - Calculator\n5 - Quit\n\n>>> ";
		std::cin >> user_choice;

		if (user_choice == 1) {
			choice_was_made = true;
			srand(time(0));

			bool Code_Complete = false;
			



			while (Code_Complete != true) {
				int random_value = rand() % 10 + 1;
				std::cout << "\nRandom value: " << random_value << std::endl;
				Sleep(1000);
				std::cout << "\nCode is completed? [y/n]\n>>> ";
				std::cin >> code_completed;
				if (code_completed == 'y') {
					Code_Complete = true;
				}
				else {
					Code_Complete = false;
				}
			}
		}

		else if (user_choice == 2) {
			choice_was_made = true;
			bool Code_Complete = false;
			while (Code_Complete != true) {
				double num_a;
				double num_b;

				double sum;
				double dif;
				double div;
				double mul;


				std::cout << "Input first number >> ";
				std::cin >> num_a;
				std::cout << "\n\nInput second number >> ";
				std::cin >> num_b;

				sum = num_a + num_b;
				dif = num_a - num_b;
				if (num_a == 0 or num_b == 0) {
					div = 0;
				}
				else {
					div = num_a / num_b;
				}
				mul = num_a * num_b;



				std::cout << "\nSum of them equals: " << sum << "\nDifference equals: " << dif << std::endl;
				if (div == 0) {
					std::cout << "\nFault detected! Zero can not be divided\nor something cannot divide by zero\n\n";
				}
				else {
					std::cout << "Divide equals: " << div << std::endl;
				}

				std::cout << "Multiply equals: " << mul << std::endl;
				Sleep(1000);
				std::cout << "\nCode is completed? [y/n]\n>>> ";
				std::cin >> code_completed;
				if (code_completed == 'y') {
					Code_Complete = true;
				}
				else {
					Code_Complete = false;
				}

			}
		}

		else if (user_choice == 3) {
			int milk_cost = 150;
			int bread_cost = 30;
			int juice_cost = 90;
			

			int amount_of_milk = 0;
			int amount_of_bread = 0;
			int amount_of_juice = 0;


			int product;
			int amount;

			bool user_completed_actions = false;
			bool product_choosen = false;
			bool proper_amount = false;


			char is_it_all;

			std::cout << "\nHello there, buyer!\nwhat are u here for today?\n\n";

			while (user_completed_actions == false) {
				product_choosen = false;
				proper_amount = false;
				while (product_choosen == false) {
				std::cout << "\nWhat do you want to buy?\n\n1 - Milk [" << milk_cost
					<< "]\n2 - Bread [" << bread_cost
					<< "]\n3 - Apple juice [" << juice_cost << "]\n\n>>> ";
					std::cin >> product;
					if (product == 1 || product == 2 || product == 3) {
						product_choosen = true;
						std::cout << "\nGreat!\n\n";
					}
					else {
						std::cout << "\nThere's no such product,\nchoose from the others\n\n";
						Sleep(2000);
					}
					
					while (proper_amount == false) {
						std::cout << "What amount do you want to buy? [storage is unlimited]\n>>> ";
						std::cin >> amount;
						if (amount > -1) {
							proper_amount = true;
						}
						else{ std::cout << "\nU can not buy less then zero!\n\n";
						Sleep(2000);
						}

						if (product == 1) { amount_of_milk = amount; }
						if (product == 2) { amount_of_bread = amount; }
						if (product == 3) { amount_of_juice = amount; }



						std::cout << "\n\n\n\nYour current check:\n\n";
						std::cout
							<< "________________________________\n"
							<< "\tChecklist\n"
							<< "________________________________\n"
							<< "| Milk:" << amount_of_milk << "; Total cost: " << milk_cost * amount_of_milk << ";\n"
							<< "|\n"
							<< "| Bread: Amount: " << amount_of_bread << "; Total cost: " << bread_cost * amount_of_bread << ";\n"
							<< "|\n"
							<< "| Apple juice:" << amount_of_juice << "; Total cost: " << juice_cost * amount_of_juice << ";\n"
							<< "|\n"
							<< "|\n"
							<< "|\n"
							<< "|\n"
							<< "| Total cost of any items: " << milk_cost * amount_of_milk
								+ bread_cost * amount_of_bread
								+ juice_cost * amount_of_juice << std::endl
							<< "|\n"
							<< "________________________________\n\n";
						std::cout << "is it all?[y/n]\n>>> ";
						std::cin >> is_it_all;
						if (is_it_all == 'y') {
							user_completed_actions = true;
						}


				}
				}




			}






		}

		else if (user_choice == 4) {
			choice_was_made = true;
			bool code_completed = false, fault_detected;

			double num_a, num_b, answer = 0;

			char operator_var, complition;

			


			while (code_completed == false) {
				fault_detected = false;
				std::cout
					<< "/--------------------\\\n"
					<< ">>> Calculator  v2 <<<\n"
					<< "|                    |\n"
					<< "| input first value: |\n"
					<< "\\                    /\n"
					<< " |> ";

				std::cin >> num_a;

				std::cout
					<< "  \\                /\n"
					<< "   |input operator|\n"
					<< "  /                \\\n"
					<< " |    > ";
				std::cin >> operator_var;
				if (operator_var == '%') {
					std::cout
						<< "/                    \\\n"
						<< "|   input percents   |\n"
						<< "\\                    /\n"
						<< " |> ";
				}
				else {
					std::cout
						<< "/                    \\\n"
						<< "| input second value:|\n"
						<< "\\                    /\n"
						<< " |> ";
				}
				std::cin >> num_b;




				if (operator_var == '+') { answer = num_a + num_b; }
				else if (operator_var == '-') { answer = num_a - num_b; }
				else if (operator_var == '*') { answer = num_a * num_b; }
				else if (operator_var == '/') {
					if (num_a == 0 || num_b == 0) { std::cout << "\nFault detected! Zero can not be divided\nor something cannot divide by zero\n\n";
					fault_detected = true;
					}
					else { answer = num_a / num_b;  }
				}
				else if (operator_var == '%') { answer = (num_b / 100) * num_a; }
				else if (operator_var == '^') { answer = pow(num_a,num_b); }





				if (fault_detected != true) {
					std::cout
						<< "/                    \\\n"
						<< "|                    |\n"
						<< "|     Answer is:     |\n <<< "
						<< answer
						<< "\n"
						<< "\\____________________/\n\n"
						<< " is it all?[y/n]\n>>> ";
				}
				std::cin >> complition;
				if (complition == 'y') { code_completed = true; }
			}
		}



		else if (user_choice == 5){
			choice_was_made = true;
		}

		else {
			std::cout << "\nYou didn't choose any of them! Try again\n";
		}
	}
	return 0;
}