#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool visited[1001];
bool graph[10001][10001];

int node{ 0 }; // ������ ���� N(1 �� N �� 1,000)
int edge{ 0 }; // ������ ���� M(1 �� M �� 10,000)
int start{ 0 }; //Ž���� ������ ������ ��ȣ V

void dfs(int x)
{
	visited[x] = true;
	cout << x << " ";
	for (int i = 1; i <= node; i++)
	{
		if (graph[x][i] && !visited[i])
			dfs(i);
	}
}

void bfs(int start)
{
	queue <int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int i = 1; i <= node; i++)
		{
			if (!visited[i] && graph[x][i])
			{
				q.push(i);
				visited[i] = true;
			}
		}
	}
}

int main() {

	cin >> node >> edge >> start;

	for (int i = 0; i < edge; i++)
	{
		int a{ 0 };
		int b{ 0 }; 

		cin >> a >> b;
	
		graph[a][b] = true;
		graph[b][a] = true;
	}

	for (int i = 1; i <= node; i++)
		visited[i] = false;

	dfs(start);

	cout << endl;

	for (int i = 1; i <= node; i++)
		visited[i] = false;

	bfs(start);

	return 0;
}