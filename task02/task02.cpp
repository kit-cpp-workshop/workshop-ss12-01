#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	
	// check for correct input
	if(n<=0) {
		cout << "Please enter valid number!" << endl;
		return 0;
	}

	int numbers[3] = {0,1,1}; // the last two and the current fibonacci number

	for(int i=0; i<n; i++) {
		cout << "Fibonacci number " << i << " is ";
		if(i<3) cout << numbers[i];
		else {
			//shift numbers and calculate new one
			numbers[0] = numbers[1];
			numbers[1] = numbers[2];
			numbers[2] = numbers[0] + numbers[1];
			cout << numbers[2];
		}
		cout << endl;
	}
	cout << endl << "Done." << endl;
	
	return 0;
}
