#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	
	int alt = 0;
	int neu = 1;
	int hilf = 1;
	for( int i = 0; i < n; i++)
	{
		cout << neu << endl;
		hilf = neu;
		neu = alt + neu;
		alt = hilf;
	}
	
	return 0;
}
