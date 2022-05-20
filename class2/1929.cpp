#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n{ 0 };
	int m{ 0 };

	cin >> m >> n;

	
	bool* isPrime = new bool[n + 1];

	for (int i = 2; i <= n; i++)
		isPrime[i] = true;

	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
			for (int j = i * i; j <= n; j += i)
				isPrime[j] = false;
	}

	for (int i = m; i <= n; i++)
		if (isPrime[i])
			cout << i << "\n";

	delete[] isPrime;
}