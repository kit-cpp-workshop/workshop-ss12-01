#include <iostream>

using namespace std;

int main()
{
    const string nameReversed = "sukraM";

    for (size_t i = 0; i < nameReversed.length(); i++) {
        cout << nameReversed.at(nameReversed.length() - i - 1);
    }

	cout << endl;

	return 0;
}
