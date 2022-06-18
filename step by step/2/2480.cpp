#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int cnt{0};
	int num{0};

	cin >> a >> b >> c;

		if (a == b)
		{
			cnt = 2;
			num = a;
			if (b == c)
				cnt = 3;
		}
		else if (a == c)
		{
			cnt = 2;
			num = a;
		}
		else if (b == c)
		{
			cnt = 2;
			num = b;
		}
		else
		{
			cnt = 1;
			num = a;
			num = num > b ? num : b;
			num = num > c ? num : c;
	}

		switch (cnt)
		{
		case 1:
			cout << num * 100;
			break;
		case 2:
			cout << 1000 + num * 100;
			break;
		default:
			cout << 10000 + num * 1000;
			break;
		}
}