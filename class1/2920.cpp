#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

bool equal(int *array1, int * array2) {
	bool same{ true };
	for (int i = 0; i < 8; i++)
	{
		if (array1[i] != array2[i])
		{
			same = false;
			break;
		}
	}

	return same;
}

int main() {
	int scale[8] = {1,2,3,4,5,6,7,8};

	int input[8];
	int rev_input[8];
	for (int i = 0; i < 8; i++)
		cin >> input[i];


	if (equal(scale, input))
		cout << "ascending";
	else
	{
		reverse(input, input + 8);
		if (equal(scale, input))
			cout << "descending";
		else
			cout << "mixed";
	}
}