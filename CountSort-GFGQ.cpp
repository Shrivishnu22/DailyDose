/*
Counting Sort

Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

Example 1:

Input:
N = 5
S = "edsab"
Output:
abdes
Explanation: 
In lexicographical order, string will be 
abdes.

Example 2:

Input:
N = 13
S = "geeksforgeeks"
Output:
eeeefggkkorss
Explanation:
In lexicographical order, string will be 
eeeefggkkorss.
Your Task:
This is a function problem. You only need to complete the function countSort() that takes string arr as a parameter and returns the sorted string. The printing is done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 105


*/

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        vector<int>count(26, 0);
	string res = "";
	for (char ch : arr)	count[ch - 'a']++;
	int cnt = 0;
	while (cnt < 26) {
		while (count[cnt]--) {
			res += (cnt + 'a');
		}
		cnt++;
	}
	return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends
