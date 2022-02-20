#include <iostream>
using namespace std;

int main() {
	int n{ 0 };
	int x{ 0 };
	

	cin >> n >> x;

	int* nums = new int[n];

	for (int i = 0; i < n; i++)
		cin >> nums[i];
	
	for (int i = 0; i < n; i++)
	{
		if (nums[i] < x)
			printf("%d ", nums[i]);
	}

	delete[] nums;
}