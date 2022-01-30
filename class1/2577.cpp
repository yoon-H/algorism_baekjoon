#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a{ 0 };
	int b{ 0 };
	int c{ 0 };

	int num{ 0 };

	vector <int> nums(10);

	cin >> a >> b >> c;

	num = a * b * c;

	
	while (num)
	{
		int rem = num % 10;
		nums[rem]++;
		num = num / 10;
	}
	

	for (int i = 0; i < nums.size(); i++)
			cout << nums[i] << endl;
}