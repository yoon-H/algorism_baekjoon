#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n{ 0 };

	cin >> n;

	int* nums = new int[n];

	for (int i = 0; i < n; i++)
		cin >> nums[i];


	cout << *min_element(nums, nums + n) << " " << *max_element(nums, nums + n);


}