#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 25
using namespace std;

int n, apart[MAX][MAX], visit[MAX][MAX]{0};
int cnt{ 0 };

vector <int> nums;

int dx[] = { 1, -1, 0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y) {

	for (int i = 0; i < 4; i++)
	{
		
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		if (visit[nx][ny] == 0 && apart[nx][ny] == 1) {
			visit[nx][ny] = 1;
			cnt++;
			dfs(nx, ny);
		}
	}
}

int main() {

	cin >> n;



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%1d", &apart[i][j]);
	}

	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visit[i][j] == 0 && apart[i][j] == 1)
			{
				cnt++;
				visit[i][j] = 1;
				dfs(i, j);
				nums.push_back(cnt);
			}

			
			cnt = 0;
		}
	}

	cout << nums.size() << "\n";

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << "\n";
	}

}