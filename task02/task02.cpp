#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	
	int current = 1;
    int old = 0;
    
    for(int i = 0; i < n; i++) {
        
        // new Fibonacci number:
        int temp = current;
        current += old;
        old = temp;
        cout << current << endl;
    }
	
	return 0;
}
