/*
Write a program to find whether the number to search is present in any of the unit digits between the start index and end index

Sample Input: Start Index - 100, End Index - 200, Number to

search - 5

Sample Output:

105,115,125,135,145,150,151,152,153,154,155,156 158,19
*/

#include <bits/stdc++.h>

using namespace std;

bool isFive(int n) {
	while (n > 0) {
		if ((n % 10) == 5)
			return true;
		n /= 10;
	}
	return false;
}

int main()
{
	vector<int>ans;
	for (int i = 100; i < 200; i++) {
		if (isFive(i))	ans.push_back(i);
	}
	for (int i : ans)	cout << i << " ";
	return 0;
}
