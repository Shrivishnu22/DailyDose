/*
Maximum Product of Three Numbers

Given an integer array nums, find three numbers whose product is maximum and return the maximum product.



Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6


Constraints:

3 <= nums.length <= 104
-1000 <= nums[i] <= 1000

*/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3],nums[0]*nums[1]*nums[nums.size()-1]);
    }
};

////linear solution

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mn1=10001,mn2=10001,mx1=-10001,mx2=-10001,mx3=-10001;
        for(auto& i:nums){
            if(i>mx1){
                mx3=mx2;
                mx2=mx1;
                mx1=i;
            }
            else if(i>mx2){
                mx3=mx2;
                mx2=i;
            }
            else if(i>mx3)mx3=i;
            if(i<mn1){
                mn2=mn1;
                mn1=i;
            }else if(i<mn2)mn2=i;
        }
        return max(mn1*mn2*mx1,mx1*mx2*mx3);
    }
};
