/*
Element Appearing More Than 25% In Sorted Array

Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.



Example 1:

Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6

Example 2:

Input: arr = [1,1]
Output: 1


Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 105
*/

class Solution {
public:
	int findSpecialInteger(vector<int>& arr) {
		int n = arr.size() * 0.25;
		if (arr.size() < 2)    return arr[0];
		map<int, int>mp;
		for (int i = 0; i < arr.size(); i++)
			mp[arr[i]]++;
		for (auto it : mp)
			if (it.second > n)
				return it.first;
		return 0;
	}
};