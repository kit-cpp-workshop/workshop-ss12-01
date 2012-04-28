/*
 * project_euler_001.cpp
 *
 *  Created on: 28.04.2012
 *      Author: prime
 *      Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <iostream>
#include <vector>

int sum_in_two_steps(int sum_until);
int sum_in_one_step(int sum_until);


int main() {
	int obere_Grenze;

	std::cout << "Calculate the sum of all the multiples of 3 or 5 below x" << std::endl;
	std::cout << "Enter x: ";
	std::cin >> obere_Grenze;

	std::cout << "Erste Fkt.: " <<sum_in_one_step(obere_Grenze) <<std::endl;
	std::cout << "Zweite Fkt.: " <<sum_in_two_steps(obere_Grenze) <<std::endl;

	return 0;
}

int sum_in_one_step(int sum_until) {
	int sum = 0;

	for (int i=0; i<=sum_until; ++i) {
		if ((i%3==0) || (i%5==0)) {
			sum += i;
		}
	}

	return sum;
}

int sum_in_two_steps(int sum_until) {
	int sum = 0; // sum of all the multiples of 3 or 5 below 1000
	std::vector<int> zahlen; // multiples of 3 or 5 below 1000

	//find all multiples of 3 or 5 below 1000
	for (int i=0; i<sum_until; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			zahlen.push_back(i);
		}
	}

	//build sum of all multiples of 3 or 5 below 1000
	for (unsigned int i=0; i<zahlen.size(); ++i) {
		sum += zahlen.at(i);
	}

	return sum;
}




