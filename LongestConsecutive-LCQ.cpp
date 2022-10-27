/*
Longest Consecutive Sequence

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.



Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9


Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 1)   return 0;
        sort(nums.begin(), nums.end());
        int cnt = 1, res = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])  continue;
            if (nums[i] + 1 == nums[i + 1])    cnt++;
            else    cnt = 1;
            res = max(res, cnt);
        }
        return res;
    }
};