/*
Find Lucky Integer in an Array

Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.



Example 1:

Input: arr = [2,2,3,4]
Output: 2

Explanation: The only lucky number in the array is 2 because frequency[2] == 2.
Example 2:

Input: arr = [1,2,2,3,3,3]
Output: 3

Explanation: 1, 2 and 3 are all lucky numbers, return the largest of them.
Example 3:

Input: arr = [2,2,2,3,3]
Output: -1

Explanation: There are no lucky numbers in the array.


Constraints:

1 <= arr.length <= 500
1 <= arr[i] <= 500
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	vector<int>v = {2, 2, 3, 4};
	map<int, int>m;
	vector<int>res;
	for (int i = 0; i < arr.size(); i++) {
		m[arr[i]]++;
	}
	for (auto x : m) {
		if (x.first == x.second)
			res.push_back(x.first);
	}
	if (res.size() > 0) cout << *max_element(res.begin(), res.end());
	else cout << -1;
}
