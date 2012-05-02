#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	
	int fibonacci[2] = {0,1};
	bool glied = 0;

	if(n>0) cout << fibonacci[0] <<" ";
	if(n>1) cout << fibonacci[1] <<" ";

	for(int i=2; i<n; i++){
		fibonacci[glied] = fibonacci[0] + fibonacci[1];
		cout << fibonacci[glied] << " ";

		glied = !glied;
	}
	
	return 0;
}
