/*
 * project_euler_002.cpp
 *
 *  Created on: 28.04.2012
 *      Author: prime
 */
#include <iostream>

int fibo_even_sum(int fibo_seq_end);



int main() {
	std::cout << fibo_even_sum(4000000);
}




int fibo_even_sum(int fibo_seq_end) {
	int sum = 0;
	int fibo1 = 0;
	int fibo2 = 1;
	int fibo_temp;

	while (fibo2<fibo_seq_end) {
		fibo_temp = fibo2;
		fibo2 = fibo1+fibo2;
		fibo1 = fibo_temp;

		if (fibo2 % 2 == 0) {
			sum += fibo2;
		}
	}

	return sum;
}
