#include <iostream>

int main() {
	int a{ 0 };
	int b{ 0 };

	std::cin>> a >> b;

	if (a > b)
		std::cout << ">";
	else if (a < b)
		std::cout << "<";
	else
		std::cout << "==";
}