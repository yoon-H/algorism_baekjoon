#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int a{ 0 };
	int b{ 0 };

	

	vector<string> s;
	string str;

	while (true) {
		cin >> a >> b;
		if (cin.eof() == true) break;
		cout << a + b << "\n";
	}



}