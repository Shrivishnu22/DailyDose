/*
Single Number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.



Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1


Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.

*/

// Using Map function
// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> m;
        int result;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int j=0;j<nums.size();j++){
            if(m[nums[j]]==1){
                result=nums[j];
                break;
            }
        }
        return result;
    }
};

// Using Array Manipulation
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()<2)
            return nums[0];
        sort(nums.begin(), nums.end());
	    int res;
	    for (int i = 0; i < nums.size(); i = i + 2) {
		    if (nums[i] != nums[i + 1]) {
			    res = nums[i];
			    break;
		    }
	    }
        return res;
    }
};

// Using XOR Operator
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
            res^=nums[i];
        return res;
    }
};
// Follow up
// In XOR operation
// a ^ a = 0
// a ^ 0 = a
