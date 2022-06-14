#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>
#define MAX 101
using namespace std;

int n, m, check[MAX][MAX]{-2};

int maze[MAX][MAX];


void bfs(pair<int, int> start)
{
	queue <pair<int, int>> q;
	q.push(start);
	check[start.first][start.second] = 1;

	while (!q.empty())
	{
		pair <int, int> x = q.front();
		q.pop();

		if (maze[x.first][x.second - 1] == 1 && check[x.first][x.second - 1] == -1)
		{
			q.push(pair<int, int>(x.first, x.second-1));
			check[x.first][x.second - 1] = check[x.first][x.second] + 1;
		}

		if (maze[x.first][x.second + 1] == 1 && check[x.first][x.second + 1] == -1)
		{
			q.push(pair<int, int>(x.first, x.second + 1));
			check[x.first][x.second + 1] = check[x.first][x.second] + 1;
		}

		if (maze[x.first -1 ][x.second] == 1 && check[x.first-1 ][x.second] == -1)
		{
			q.push(pair<int, int>(x.first-1, x.second));
			check[x.first-1][x.second ] = check[x.first][x.second] + 1;
		}

		if (maze[x.first+1][x.second] == 1 && check[x.first+1][x.second] == -1)
		{
			q.push(pair<int, int>(x.first+1, x.second));
			check[x.first+1][x.second] = check[x.first][x.second] + 1;
		}

	}
}


int main() {
	
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%1d", &maze[i][j]);
			check[i][j] = -1;
		}
	}

	pair <int, int> start = {1,1};

	bfs(start);

	cout << check[n][m];

}