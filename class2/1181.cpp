#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() < b.length())
	{
		return true;
	}
	else if (a.length() > b.length())
		return false;
	else
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] < b[i])
				return true;
			else if (a[i] > b[i])
				return false;
		}
		return false;
	}
	
}

int main() {
	int n{ 0 };

	cin >> n;

	vector <string> words(n);


	for (int i = 0; i < n; i++)
		cin >> words[i];

	sort(words.begin(), words.end(), compare);
	words.erase(unique(words.begin(), words.end()), words.end());

	for (int i = 0; i < words.size(); i++)
		cout << words[i] << "\n";

}