#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	
	int x1 = 0;
	int x2 = 1;
	int z;
	for(int i=0; i<n; i++){
		cout << x2 << endl;
		z = x2;
		x2 = x1 + x2;
		x1 = z;
	}
	
	return 0;
}
