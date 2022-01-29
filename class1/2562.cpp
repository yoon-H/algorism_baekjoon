#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	vector <int> nums(9);

	for (int i = 0; i < 9; i++)
		cin >> nums[i];

	int max = *max_element(nums.begin(), nums.end());
	int max_index = max_element(nums.begin(), nums.end()) - nums.begin();

	cout << max << endl << max_index+1;
}