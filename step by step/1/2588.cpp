#include <iostream>
using namespace std;

int main() {
	int num, time, mid, result;

	cin >> num;
	cin >> time;

	int temp = time;

	for (int i = 0; i < 3 ; i++)
	{
		int d = temp % 10;
		cout << d * num << endl;

		temp /= 10;
	}

	cout << num * time;

}