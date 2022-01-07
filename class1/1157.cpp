#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string word{ " " };

	cin >> word;

	vector<int> alpha(26);

	char max_value{ ' ' };

	for (char w : word) 
	{
		if ((w >= 'A') && (w <= 'Z'))
			alpha[w - 'A']++;
		else if ((w >= 'a') && (w <= 'z'))
			alpha[w - 'a']++;
	}

	int max_index = max_element(alpha.begin(), alpha.end()) - alpha.begin();

	max_value = max_index + 'A';

	for (int i = 0; i < 24; i++)
	{
		if (i != max_index)
		{
			if (alpha[i] == alpha[max_index])
				max_value = '?';
		}
	}

	cout << max_value;

}