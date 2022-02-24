/*
First Unique Character in a String

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.



Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1


Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	unordered_map <int, int> m;
	string s;
	cin >> s;
	char element;
	int flag = true;
	for (int i = 0; i < s.size(); i++) {
		m[s[i]]++;
	}
	for (auto &it : m) {
		if (it.second == 1) {
			element = (char)it.first;
			break;
		}
	}
	for (int k = 0; k < s.size(); k++) {
		if (m[s[k]] == 1 ) {
			cout << k << endl;
			flag = false;
			break;
		}
	}
	if (flag) cout << -1 << endl;

}

//O(n) Approach

class Solution {
public:
	int firstUniqChar(string s) {
		vector<int> v(26, 0);
		for (char c : s) v[c - 'a']++;
		for (int i = 0; i < s.length(); i++) {
			if (v[s[i] - 'a'] == 1) return i;
		}
		return -1;
	}
};
