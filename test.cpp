#include "pch.h"
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

TEST(TestCaseName, TestName) {
  EXPECT_EQ(f(1, { 1,2,3 })[0], 2);
  EXPECT_EQ(f(1, { 1,2,3 })[1], 3);
  EXPECT_EQ(f(1, { 1,2,3 })[2], 4);
}