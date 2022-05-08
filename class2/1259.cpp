#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	string num{ " " };
	vector <string> result;

	while (true)
	{
		cin >> num;
		if (num == "0") break;

		bool same{ true };
		for (int i =0; i < num.length() / 2; i++)
		{
			if (num[i] != num[num.length() - i -1])
			{
				same = false;
				break;
			}
		}
		if (same)
			result.push_back("yes");
		else
			result.push_back("no");
	}

	for(int i =0; i < result.size(); i++)
		cout << result[i] << endl;
	
}