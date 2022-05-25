/*
Check whether the given numbers is anagram or not

I/p: 12345
	 34512
O/p: Anagram numbers

I/p: 12345
	 34562
O/p: Not anagram numbers

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, len1 = 0, len2 = 0;
	cin >> n >> m;
	bool flag = true;
	vector<int>v1, v2;
	while (n > 0) {
		int digit = n % 10;
		len1++;
		v1.push_back(digit);
		n /= 10;
	}
	while (m > 0) {
		int digit = m % 10;
		len2++;
		v2.push_back(digit);
		m /= 10;
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	if (len1 != len2)  flag = false;
	for (int i = 0; i < len1; i++) {
		if (v1[i] != v2[i]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "Anagram numbers" << endl;
	} else {
		cout << "Not anagram numbers" << endl;
	}
	return 0;
}
