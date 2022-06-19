/*
Return the frequencies of a character of a string.

Input:
bbaa

Output:
b-2
a-2

Input:
bbaabbbbaaabb

Output:
b-8
a-5

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	unordered_map<char, int>mp;
	for (int i = 0; i < s.size(); i++) {
		mp[s[i]]++;
	}
	int n = mp.size();
	while (n--) {
		int max = 0;
		char temp;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			if ((it->second > max) || (it->first > temp && it->second == max)) {
				max = it->second;
				temp = it->first;
			}
		}
		cout << temp << "-" << max << endl;
		mp.erase(temp);
	}
}
