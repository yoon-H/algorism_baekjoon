#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
using namespace std;

multiset <int> Q;


int main() {
	int test, time;

	scanf("%d", &test);

	char c{ ' ' };
	int num{ 0 };

	for (int i = 0; i < test; i++)
	{
		scanf("%d", &time);

		for (int j = 0; j < time; j++)
		{
			scanf(" %c	%d",&c, &num);

			if (c == 'I')
			{
				Q.insert(num);
			}
			else if (c == 'D')
			{
				if (Q.empty())
					continue;

				if (num == 1)
				{
					auto index = Q.end();
					index--;
					Q.erase(index);
				}
				else
					Q.erase(Q.begin());
			}
		}
		if (Q.empty())
			printf("EMPTY\n");
		else {
			auto iter = Q.end();
			iter--;
			printf("%d %d\n", *iter, *Q.begin());
		}

		Q.clear();
	}
}