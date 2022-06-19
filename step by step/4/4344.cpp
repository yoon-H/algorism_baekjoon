#include <iostream>
using namespace std;

int main() {
	int test;
	int students;
	
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> students;

		int* grade = new int[students];

		int sum{ 0 };
		
		for (int j = 0; j < students; j++)
		{
			cin >> grade[j];
			sum += grade[j];
		}

		double mean = sum / (double)students;

		int high_num{ 0 };
		

		for (int k = 0; k < students; k++)
		{
			if (grade[k] > mean) 
				high_num++;
		};

		double rate = high_num*100 / double(students);

		cout << fixed;
		cout.precision(3);
		cout << rate << "%\n";

	}
}