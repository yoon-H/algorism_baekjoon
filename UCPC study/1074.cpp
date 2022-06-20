#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

long cnt{ 0 };
long n, r, c;

void zcount(long size, long row, long col) {

	if (row == r && col == c)
	{
		cout << cnt;
		return;
	}

	if (r < row + size && r >= row && c < col + size && c >= col)
	{
		zcount(size/2, row, col);
		zcount(size/2, row, col + size/2);
		zcount(size/2, row + size/2, col);
		zcount(size/2, row + size/2, col + size/2);
	}
	else
	{
		cnt += size*size;
	}
}


int main() {
	
	cin >> n >> r >> c;

	zcount(1 << n, 0, 0);


}


/*
long cnt{ 0 };
vector <vector <long>> arr;


void zcount(long n, long row, long col)
{
	if (n == 0)
	{
		arr[row].push_back(cnt);
		//arr[row][col] = cnt;
		cnt++;
		return;
	}
	else
	{
		zcount(n - 1, row, col);
		zcount(n - 1, row, col + (1 << (n-1)));
		zcount(n - 1, row + (1 << (n - 1)),col);
		zcount(n - 1, row + (1 << (n - 1)), col + (1 << (n - 1)));
		return;
	}
}

int main() {
	long n, r, c;
	
	cin >> n >> r >> c;

	for (long i = 0; i < (1 << n); i++)
	{
		vector <long> v;
		arr.push_back(v);
	}

	zcount(n, 0, 0);

	cout << arr[r][c];
}
*/