/*
Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-231 <= nums[i] <= 231 - 1


*/



#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v;
	unordered_map <int, int> m;
	int n, element, result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> element;
		v.push_back(element);
	}
	for (int j = 0; j < n; j++) {
		m[v[j]]++;
	}
	for (int k = 0; k < n; k++) {
		if (m[v[k]] > (v.size() / 2)) {
			result = v[k];
			break;
		}
	}
	cout << result;

}
