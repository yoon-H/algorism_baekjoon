#include <iostream>
using namespace std;

int main() {
	char letter{ ' ' };
	int numAscii{ 0 };

	cin >> letter;
	numAscii = int(letter);

	cout << numAscii;
}