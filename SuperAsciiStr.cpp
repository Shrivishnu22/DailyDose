/*
SUPER ASCII STRING

Super ASCII String - count of characters = respective super ASCII code

Input: S : "ssba"
Output: "No

Input: S : "bba
Output: "Yes

E.g. a-1, b-2, ---- , z-26
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;
	vector<int>arr(26, 0);
	for (char ch : str) {
		arr[ch - 'a']++;
	}
	bool flag = true;
	for (char ch : str) {
		int n = ch - 'a' + 1;
		if (n != arr[ch - 'a']) {
			flag = false;
			break;
		}
	}
	if (flag)	cout << "True";
	else	cout << "False";
	return 0;
}
