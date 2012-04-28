#include <iostream>

//using namespace std;

int fibo(int x); // Prototyp

int main()
{
	int n = 0;
	std::cout << "How many numbers? " << std::flush;
	std::cin >> n;
	
	// Insert your code here
	for (int i=1; i<=n; ++i) {
		std::cout << fibo(i) << std::endl;
	}

	std::cin.get();
}

int fibo(int x) {
	if (x == 1) {
		return 0;
	} else if (x == 2) {
		return 1;
	} else {
		return fibo(x-1) + fibo(x-2);
	}
}
