#include <iostream>
using namespace std;

int main() {
	int rems[42]{ 0 };
	int nums[10];

	for (int i = 0; i < 10; i++)
		cin >> nums[i];

	int rem{ 0 };
	for (int i = 0; i < 10; i++)
	{
		rem = nums[i] % 42;
		rems[rem] +=1;
	}

	int n{ 0 };
	for (int i = 0; i < 42; i++)
	{
		if (rems[i] != 0)
			n++;
			
	}
	cout << n;
}