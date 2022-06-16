/*
Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.



Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

Example 2:

Input: nums = [3,1,3,4,2]
Output: 3


Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.
*/

class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		int ans;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++) {
			if (nums[i] == nums[i + 1]) {
				ans = nums[i];
				break;
			}
		}
		return ans;
	}
};

//O(N) - Time Complexity
//O(1) - space Complexity


int findDuplicate(vector<int>& nums) {
	int slow = nums[0], fast = nums[0];

	//NOTE: We are using do-while loop here, because at the very first step 'fast==slow'. you can use normal while loop also, but for that you have to add additional conditions also.
	do {
		slow = nums[slow]; //one step at a time
		fast = nums[nums[fast]]; //two steps at a time
	} while (slow != fast);

	//We have met our first collision, now we have to find out the value for which the collision happened
	slow = nums[0]; //re-initializing the slow pointer with the 0-th value
	while (slow != fast) {
		slow = nums[slow]; //one step at a time
		fast = nums[fast]; //one step at a time
	}
	return fast;  //return slow will also work
}