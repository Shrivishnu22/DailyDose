/*
 Longest Palindrome

Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.

Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
*/

class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()<2)  return s.size();
        int res=0;
        bool flag=true;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]%2==0){
                res+=mp[s[i]];
                mp[s[i]]=0;
            }
        }
        for(auto it:mp){
            if(it.second==1 && flag){
                res+=it.second;
                flag=false;
            }
        }
        return res;
    }
};
