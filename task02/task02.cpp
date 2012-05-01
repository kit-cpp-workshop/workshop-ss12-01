#include <iostream>

int main()
{
	unsigned int n = 0;
	std::cout << "How many numbers? n=" << std::flush;
	std::cin >> n;

	unsigned int a = 0;
	unsigned int b = 1;

	std::cout << "Die ersten " << n << " Fibonacci-Zahlen sind:" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	for (unsigned int i = 0; i < (n-2); ++i)
	{
		int c = a + b;
		a = b;
		b = c;
		std::cout << c << std::endl;
	}
	
	return 0;
}
