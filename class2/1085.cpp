#include <iostream>
using namespace std;

int main() {
	int x{ 0 };
	int y{ 0 };
	int w{ 0 };
	int h{ 0 };

	cin >> x >> y >> w >> h;

	int min{ 0 };

	min = x < w - x ? x: w - x;
	min = min < y ? min : y;
	min = min < h - y ? min : h - y;

	cout << min;

}