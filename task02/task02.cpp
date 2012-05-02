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

	for(int i=0; i<=n; i++) {



	}
	// Insert your code here
	
	return 0;
}
