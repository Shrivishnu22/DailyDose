/*
Replace the most frequent character in the given string.

I/p: aabbbc
     x
O/p: aaxxxc

I/p: aaabcbcjdis
     y
O/p: yyybcbcjdis


*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	char ch;
	cin >> str >> ch;
	vector<int>arr(26, 0);
	for (char ch : str) {
		arr[ch - 'a']++;
	}
	char res;
	int max = INT_MIN;
	for (char ch : str) {
		if (arr[ch - 'a'] > max) {
			max = arr[ch - 'a'];
			res = ch;
		}
	}
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == res)	str[i] = ch;
	}
	cout << str << endl;
	return 0;
}
