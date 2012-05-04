#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	
	int lastFibos[2] = { 0, 1 };
	int i;

	// Easy case: first two fibos
	for (i = 0; i < 2 && i < n; i++) {
	    cout << lastFibos[i] << endl;
	}

	// This case is easy, too
	for (; i < n; i++) {
	    const int newFibo = lastFibos[0] + lastFibos[1];

	    lastFibos[i & 0x1] = newFibo;

	    cout << newFibo << endl;
	}
	
	return 0;
}
