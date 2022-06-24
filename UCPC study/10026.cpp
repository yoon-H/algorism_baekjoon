#include <iostream>
#define MAX 101
using namespace std;

int n, check[MAX][MAX];

string area[MAX];

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };


void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];


		if (nx <0 || nx >=n || ny < 0 || ny >= n) continue;
		if (check[nx][ny] == 0 && area[nx][ny] == area[x][y]) {
			check[nx][ny] = 1;
			dfs(nx, ny);
		}
	}
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> area[i];
	}

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check[i][j] == 0)
			{
				cnt++;
				check[i][j] =1;
				dfs(i, j);
			}
		}
	}

	cout << cnt << " ";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			if (area[i][j] == 'G')area[i][j] = 'R';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			check[i][j] = 0;
	}

	cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check[i][j] == 0)
			{
				cnt++;
				check[i][j] = 1;
				dfs(i, j);
			}
		}
	}

	cout << cnt;


	return 0;

}