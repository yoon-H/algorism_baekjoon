#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int lectures{ 0 };

	cin >> lectures;

	vector <float> grades(lectures);

	for (int i = 0; i < grades.size(); i++)
		cin >> grades[i];

	// 최대 점수 찾기
	float max = *max_element(grades.begin(), grades.end());

	// 평균 구하기
	float sum = 0;
	for (int i = 0; i < grades.size(); i++)
	{
		grades[i] = (grades[i] / max) * 100;
		sum += grades[i];
	}

	float eval = sum / float(lectures);

	// 출력
	cout << fixed;
	cout.precision(3);
	cout << eval;


}