#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	
	// Insert your code here
	// Von Johannes Antoni und Christoph Baumhardt
	int a=0; // a enth�lt letzten Ausgabewert
	int b=1; // b enth�lt n�chsten Ausgabewert (am Schleifenende/vor Schleifenbeginn)
	int c=0; // c ist Hilfsvariable
	for(int i=0; i<n; i++ ){
		cout << b << endl;
		c=a;
		a = b;
		b = b + c;
	}

	return 0;
}
