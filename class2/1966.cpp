#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n{ 0 };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int size{ 0 };
		int target{ 0 };

		cin >> size >> target;

		vector <int> files(size);

		int max{ 0 };
		int target_index{ 0 };
		for (int j = 0; j < size; j++)
		{
			
			cin >> files[j];
			if (files[j] > max)
				max = files[j];
			if (j == target)
				target_index = j;
		}

		int cnt{ 0 };
		bool check{ true };
		if (size == 1)
			cout << "1\n";
		else
		{
			while (check)
			{
				for (int j = 0; j < (int)files.size(); j++)
				{
					if (files[j] == max)
					{
						files.erase(files.begin() + j);
						cnt++;
						max = *max_element(files.begin(), files.end());

						if(j < target_index)
							target_index--;
						else if (j == target_index)
						{
							check = false;
							cout << cnt << "\n";
							break;
						}
						j--;

					}
				}
			}
			
		}
		
	}
}