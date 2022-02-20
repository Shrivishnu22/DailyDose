/* 
Valid Anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.

*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int ascii, arr[256] = {0}, check = 0;
	for (int i = 0; i < str1.length(); i++) {
		ascii = str1[i];
		arr[ascii]  += 1;
	}
	for (int k = 0; k < str2.length(); k++) {
		ascii = str2[k];
		arr[ascii] -= 1;
	}
	for (int j = 0; j < 256; j++) {
		if (arr[j] == 0)
			continue;
		else {
			check = 1;
			break;
		}
	}
	if (check == 0) cout << "yes" << endl;
	else cout << "no" << endl;
}
