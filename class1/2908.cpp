#include <iostream>
#include <cmath>
using namespace std;

int reverse_three_digits(int &num) {
	int term{ 0 };
	int new_num{ 0 };

	for (int i = 2; i >=0; i--)
	{
		term = num % 10;
		num /= 10;

		new_num += term * pow(10,i);
	}

	return new_num;
}


int main() {
	int num1{ 0 };
	int num2{ 0 };
	int bigger{ 0 };


	cin >> num1 >> num2;

	num1 = reverse_three_digits(num1);
	num2 = reverse_three_digits(num2);
	bigger = (num1 > num2) ? num1 : num2;

	cout << bigger;
}