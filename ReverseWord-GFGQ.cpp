/*
Reverse a String

You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG

Example 2:

Input:
s = for
Output: rof
Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000
*/

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  int first=0,last=str.size()-1;
  while(first<=last){
      char tmp = str[first];
      str[first]=str[last];
      str[last]=tmp;
      first++;
      last--;
  }
  return str;
}

