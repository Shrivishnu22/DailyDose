/*
Minimum difference pair

Given an unsorted array, find the minimum difference between any pair in given array.
 

Example 1:

Input: nums = [2, 4, 5, 9, 7]
Output: 1
Explanation: Difference between 5 and 4 is 1.

Example 2:

Input: nums = [3, 10, 8, 6]
Output: 2
Explanation: Difference between 8 and 6 is 2.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function minimum_difference() which takes the array as input parameter and returns the minimum difference  between any pair in given array.

Expected Time Compelxity: O(N* log(N)) where N is length of array.
Expected Space Complexity: O(1)
 

Constraints:
2 <= N <= 105
1 <= nums[i] <= 109


*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   	    // Code here
   	    sort(nums.begin(),nums.end());
   	    int res=nums[nums.size()-1];
   	    for(int i=1;i<nums.size();i++){
   	        if(nums[i]-nums[i-1]<res)   res=nums[i]-nums[i-1];
   	    }
   	    return res;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		int ans = ob.minimum_difference(nums);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
