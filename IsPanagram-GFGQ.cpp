/*
Pangram Strings

Check if the given string S is a Panagram or not. A pangram is a sentence containing every letter in the English Alphabet.

Example 1:

Input: S = "Pack mY box witH fIve dozen 
            liquor jugs"
Output: 1
Explanation: Given string contains all 
English Alphabets. 

Example 2:

Input: S = "geeksFORgeeks"
Output: 0
Explanation: Given string does not contain 
all English Alphabets. 
Your Task:  
You don't need to read input or print anything. Your task is to complete the function isPanagram() which takes the string as inputs and returns 1 if the given string is panagram, otherwise 0.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(constant)

Constraints:
1 ≤ |S| ≤ 105
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int isPanagram(string S)
	{
	    // Your code goes here 
	    vector<int>arr(26,0);
	    for(char ch:S){
	        if(ch>='A'&&ch<='Z')    arr[ch-'A']=1;
	        else    arr[ch-'a']=1;
	    }
	    for(int it:arr){
	        if(it==0)   return 0;
	    }
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		cout << ob.isPanagram(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
