#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int graph[101][101], edge;

int visited[101][101], n, cnt{0};

int xsize, ysize;

int dx[] = { 1, -1, 0,0 };
int dy[] = { 0,0,1,-1 };


void dfs(int x, int y)
{
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= xsize || ny < 0 || ny >= ysize) continue;
		if (graph[nx][ny] && !visited[nx][ny])
		{
			dfs(nx,ny);
		}
	}


}

void reset(int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			graph[i][j] = 0;
			visited[i][j] = 0;
		}
			
	}
}

int main() {
	int test{ 0 };

	cin >> test;

	for (int i = 0; i < test; i++)
	{
		scanf("%d %d %d", &xsize, &ysize, &edge);

		reset(xsize, ysize);

		for (int j = 0; j < edge; j++)
		{
			int num1, num2;

			scanf("%d %d", &num1, &num2);

			graph[num1][num2] = 1;
		}

		int cnt{ 0 };

		for (int j = 0; j < xsize; j++)
		{
			for (int k = 0; k < ysize; k++)
			{
				if (graph[j][k] && !visited[j][k])
				{
					cnt++;
					dfs(j,k);
				}
			}
		}

		printf("%d\n", cnt);
	}
}