/*
Subsets

Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:

Input: nums = [0]
Output: [[],[0]]


Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	std::vector<int> v = {1, 2, 3};
	vector<vector<int>>res;
	int size = v.size(), i = 0;
	int n = pow(2, size);
	while (i < n) {
		vector<int>temp;
		for (int j = 0; j < size; j++) {
			if (i & 1 << j)
				temp.push_back(v[j]);
		}
		res.push_back(temp);
		i++;
	}
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j];
		}
		cout << endl;
	}

}