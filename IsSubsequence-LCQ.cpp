/*
Is Subsequence

Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).



Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false


Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.

*/

#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	bool flag = false;
	int j = 0;
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i] == s[j]) {
			j++;
		}
	}
	if (j == s.size())
		flag = true;
	cout << flag;
}
