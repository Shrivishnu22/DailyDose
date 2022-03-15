/*
Top K Frequent Elements

Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.



Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:

Input: nums = [1], k = 1
Output: [1]


Constraints:

1 <= nums.length <= 105
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.

My understanding :

we have to return the maximum frequency elements in descending order of k times.

priority queue arranges itself in descending order. so that purpose only we are using this.
*/

class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		map<int, int>mp;
		vector<int>res;
		priority_queue<pair<int, int>>q;
		for (int i = 0; i < nums.size(); i++) {
			mp[nums[i]]++;
		}
		for (auto it : mp) q.emplace(it.second, it.first);
		for (int i = 0; i < k; i++) {
			res.push_back(q.top().second);
			q.pop(); a
		}

		return res;
	}
};

