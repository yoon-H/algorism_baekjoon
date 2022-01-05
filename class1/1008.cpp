#include <iostream>
using namespace std;

int main() {
	int a{ 0 };
	int b{ 0 };
	double c{ 0 };

	cin >> a >> b;

	c = double(a) / double(b);

	cout.precision(9);

	cout << fixed << c;
}