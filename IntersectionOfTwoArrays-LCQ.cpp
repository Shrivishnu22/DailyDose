/*
Intersection of Two Arrays

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.



Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

Explanation: [4,9] is also accepted.


Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	std::vector<int> v1 = {4, 9, 5};
	std::vector<int> v2 = {9, 4, 9, 8, 4};
	set<int> res;
	for (int i = 0; i < v1.size(); i++) {
		for (int j = 0; j < v2.size(); j++) {
			if (v1[i] == v2[j])
				res.insert(v1[i]);
		}
	}
	for (auto k = res.begin(); k != res.end(); k++) {
		cout << *k << endl;
	}

	return 0;
}

//O(N) Approach

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ans; // Initialize an empty vector to hold the result
		set s = set(nums1.begin(), nums1.end()); // Storing elements of first array into a set, so we can get rid of duplicacy

		for (int x : nums2) // Iterate through the elements of second array
		{
			if (s.find(x) != s.end()) // Check if the element of second array is present in the set created from first array
			{
				ans.push_back(x); // push matched element into result
				s.erase(x); // remove element from the set, so we will not face any duplicacy in the next iteration
			}
		}
		return ans;
	}
};
