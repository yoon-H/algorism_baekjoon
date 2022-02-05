#pragma warning(disable: 4996)
#include <iostream>
#include <stdio.h> //시간 초과로 입출력문 변경

using namespace std;

int main() {
	int n{ 0 };

	scanf("%d", &n);

	for (int i = n; i > 0 ; i--)
		printf("%d\n", i);
}