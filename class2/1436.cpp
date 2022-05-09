#include <iostream>
#include <string>
using namespace std;

int main() {
	int n{ 0 };
	int count{ 0 };
	int num{ 0 };

	cin >> n;

	while (count != n) {
		if (to_string(num).find("666") != string::npos)
			count++;
				
		num++;
	}

	cout << num-1;
}