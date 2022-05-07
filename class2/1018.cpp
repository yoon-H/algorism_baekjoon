#include <iostream>
#include <utility>
using namespace std;

char repaint(char color) {
	if (color == 'B')
		return 'W';
	else if (color == 'W')
		return 'B';
	else
		return ' ';

}

int main() {
	int n{ 0 };
	int m{ 0 };

	cin >> n >> m;

	char** input = new char*[n];

	for (int i = 0; i < n; i++)
	{
		input[i] = new char[m];
		for (int j = 0; j < m; j++)
			cin >> input[i][j];
	}

	char prev{ ' ' };

	int min{ 64 }; // 최소 수 세기
	int strow{n-8}; // 시작 행
	int stcol{m-8}; // 시작 열
	
	while (strow >= 0) {
		int stcol = m - 8;
		while (stcol >= 0) {
			int count{ 0 }; // 수 세기

			for (int i = strow; i < strow + 8; i++)
			{
				for (int j = stcol; j < stcol+8; j++)
				{
					if (i == strow && j == stcol)
						prev = input[i][j];
					else {
						if (prev == input[i][j])
						{
							count++;
							prev = repaint(input[i][j]);
						}
						else
							prev = input[i][j];
					}
				}
				prev = repaint(prev);
			}

			if (count > 32)
			{
				count = 64 - count;
			}
			if (count < min)
				min = count;
			stcol--;
		}
		strow--;
	}

	cout << min;

}