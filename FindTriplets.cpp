/*
write a program to find the triplets in the given array that satisfies the
difference value you have to find the length of triplet.

Sample input :

Array - {1,2,4,5,78,10}
Difference value - 3

Output

{1,4,7},{2,5,8},{4,7,10}

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v = {1, 2, 4, 5, 7, 8, 10}, tmp;
	vector<vector<int>>res;
	int diff = 3;
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			for (int k = j + 1; k < v.size(); k++) {
				if (abs(v[i] - v[j]) == diff && abs(v[j] - v[k]) == diff) {
					tmp.push_back(v[i]);
					tmp.push_back(v[j]);
					tmp.push_back(v[k]);
					res.push_back(tmp);
					tmp.clear();
				}
			}
		}
	}
	for (int i = 0; i < res.size(); i++) {
		cout << "{";
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j];
			if (j != res[i].size() - 1)	cout << ",";
		}
		cout << "}";
		if (i != res.size() - 1)	cout << ",";
	}
	return 0;
}