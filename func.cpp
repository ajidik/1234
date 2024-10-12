#include <iostream>
#include <vector>

std::vector<int> f(int plus, std::vector<int> vec) {
	std::string simbol;
	int number;

	int count = 0;
	for (auto i : vec) {
		vec[count] = i + plus;
		count++;
	}

	return vec;

}

int main() {
	for (auto i : f(1, { 1,2,3 })) {
		std::cout << i;
	}

}