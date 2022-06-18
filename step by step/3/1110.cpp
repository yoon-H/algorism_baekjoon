#include <iostream>
using namespace std;

int main() {
	int n;
	int temp;
	int num{ 0 };
	int cyc{ 0 };

	cin >> n;

	num = n;
	while (true)
	{
		temp = (num / 10) + (num % 10);
		num = ((num % 10) * 10) + (temp % 10);
		cyc += 1;
		if (n == num)
			break;
	} 

	cout << cyc;
}