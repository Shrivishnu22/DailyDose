/*
Check if string is rotated by two places

This problem is part of GFG SDE Sheet. Click here to view more.  

Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 1
Explanation: amazon can be rotated anti
clockwise by two places, which will make
it as azonam.

Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 0
Explanation: If we rotate geeksforgeeks by
two place in any direction , we won't get
geeksgeeksfor.

Your Task:
The task is to complete the function isRotated() which takes two strings as input parameters and checks if given strings can be formed by rotations. The function returns true if string 1 can be obtained by rotating string 2 by two places, else it returns false.

Expected Time Complexity: O(N).
Expected Auxilary Complexity: O(N).
Challenge: Try doing it in O(1) space complexity.

Constraints:
1 ≤ length of a, b ≤ 105


*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool cw(string s1, string s2){
            string res=s1;
            int len = s1.size();
            char last=s1[len-1],prev=s1[len-2];
            for(int i=len-1;i>1;i--)
                res[i]=res[i-2];
            res[0]=prev;
            res[1]=last;
            if(res==s2)   return true;
            else    return false;
        }
        
        bool acw(string s1, string s2){
            string res=s1;
            int len = s1.size();
            char first=s1[0],sec=s1[1];
            for(int i=0;i<len-2;i++)
                res[i]=res[i+2];
            res[len-1]=sec;
            res[len-2]=first;
            if(res==s2)   return true;
            else    return false;
        }
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.size()==1){
            if(str1==str2)  return true;
            else    return false;
        }
        if(cw(str1,str2)||acw(str1,str2))   return true;
        else    return false;
        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
