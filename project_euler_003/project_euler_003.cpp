/*
 * project_euler_003.cpp
 *
 *  Created on: 28.04.2012
 *      Author: prime
 *
 * What is the largest prime factor of the number 600851475143
 *
 */

#include <iostream>
#include <vector>
#include <cmath>

int prime_factors(long int num);

int main() {

	std::cout << "largest factor: "<< prime_factors(600851475143);

	return 0;
}

int prime_factors(long int num) {
	std::vector<int> prime_factors_of_num;

	if (num % 2 == 0) {
		prime_factors_of_num.push_back(2);
		num /= 2;
	}

	for (int i=3; i<=num; i+=2) {
		if (num % i == 0) {
			prime_factors_of_num.push_back(i);
			num /= i;
		}

	}

	return prime_factors_of_num.back();
}
