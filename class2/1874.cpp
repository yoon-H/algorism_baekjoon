#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n{ 0 };

	cin >> n; // 배열 수
	int* input = new int[n]; //input 배열
	stack <int> s; // 1부터 넣는 스택
	stack <int> result; // 결과 배열
	vector <char> output; // output 배열

	for (int i = 0; i < n; i++)
		cin >> input[i];

	int now{ 0 };

	bool complete{ true };

	int s_input{ 1 };
	for (int i = 0; i < n; i++)
	{
		int curr = input[i];

		while (result.empty() || result.top() != curr )
		{
			if (result.empty())
			{
				if (result.size() == 0) // 처음 시작할 때
				{
					for (; s_input <= curr; s_input++)
					{
						s.push(s_input);
						output.push_back('+');
					}

					result.push(s.top());
					s.pop();
					output.push_back('-');
				}
			}
			else {

				if (result.top() > curr)
				{
					if (s.top() == curr)
					{
						result.push(s.top());
						s.pop();
						output.push_back('-');
					}
					else if (s.top() > curr)
					{
						complete = false;
						break;
					}
				}
				else
				{
					if (s.empty() || s.top() < curr)
					{
						for (; s_input <= curr;s_input++)
						{
							s.push(s_input);
							output.push_back('+');
							//output.push_back(s_input+48);
						}

						result.push(s.top());
						s.pop();
						output.push_back('-');
					}
					else {
						complete = false;
						break;
					}

					

				}

			}
		}
		if (!complete)
			break;
	}

	if (complete)
	{
		for (char i : output)
			cout << i << "\n";
	}
	else
		cout << "NO";
}