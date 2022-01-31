#include <iostream>
#include <string>
using namespace std;

int main() {
	int test{ 0 };
	
	cin >> test;

	int* nums = new int[test];
	string* words = new string[test];
	string* new_words = new string[test];


	for (int i = 0; i < test; i++)
		cin >> nums[i] >> words[i];


	for (int i = 0; i < test; i++)
	{
		for (int j = 0; j < words[i].size(); j++)
		{
			for (int k = 0; k < nums[i]; k++)
				new_words[i] = new_words[i] + words[i][j];
		}
	}


	for (int i = 0; i < test; i++)
		cout << new_words[i] << endl;
	
	delete[] new_words;
	delete[] nums;
	delete[] words;
}