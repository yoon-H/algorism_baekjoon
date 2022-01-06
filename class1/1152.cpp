#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string line{ "" };

	getline(cin, line);
	int count{ 0 };
	char temp{ ' ' };

	for (char ch : line)
	{
		if (isspace(ch) == 0 &&   0 != isspace(temp))
			count++;

		temp = ch;	
	}
	cout << count;
}