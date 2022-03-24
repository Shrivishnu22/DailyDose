/*
Consecutive Characters

The power of the string is the maximum length of a non-empty substring that contains only one unique character.

Given a string s, return the power of s.
 

Example 1:

Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.

Example 2:

Input: s = "abbcccddddeeeeedcba"
Output: 5
Explanation: The substring "eeeee" is of length 5 with the character 'e' only.
 

Constraints:

1 <= s.length <= 500
s consists of only lowercase English letters.
*/

class Solution {
public:
    int maxPower(string s) {
        int count=0;
        vector<int>temp;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                count+=1;
            }
            else{
                temp.push_back(count+1);
                count=0;
            }            
        }
        count= *max_element(temp.begin(),temp.end());
        return count;
    }
};
