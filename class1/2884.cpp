#include <iostream>
using namespace std;

int main() {
	int hour{ 0 };
	int minute{ 0 };

	cin >> hour >> minute;

	if (minute < 45)
		if (hour == 0)
			cout << 23 << ' ' << minute + 15;
		else
			cout << hour - 1 << ' ' << minute + 15;
	else
		cout << hour << ' ' << minute - 45;
}