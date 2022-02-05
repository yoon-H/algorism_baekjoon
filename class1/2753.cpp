#include <iostream>
using namespace std;

int main() {
	int n{ 0 };

	cin >> n;

	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		cout << 1;
	else
		cout << 0;
}