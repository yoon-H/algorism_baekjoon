#include <iostream>
using namespace std;

int main() {
	int n{ 0 };
	int a{ 0 };
	int b{ 0 };

	cin >> n;
	
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr[i] = a + b;
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;


}