#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


int graph[101][101], edge;

int visited[101], n , cnt{0};

void dfs(int x)
{
	visited[x] = 1;

	for (int i = 1; i <=n; i++)
	{
		if (graph[x][i] && !visited[i])
		{
			cnt++;
			dfs(i);
		}
	}

	
}

int main() {
	cin >> n;

	cin >> edge;

	for (int i = 0; i < edge; i++)
	{
		int num1,num2;

		scanf("%d %d", &num1, &num2);

		graph[num1][num2] = 1;
		graph[num2][num1] = 1;
	}


	dfs(1);

	printf("%d", cnt);

		
	
}