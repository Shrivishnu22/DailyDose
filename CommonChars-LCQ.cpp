/*
Find Common Characters

Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

 

Example 1:

Input: words = ["bella","label","roller"]
Output: ["e","l","l"]

Example 2:

Input: words = ["cool","lock","cook"]
Output: ["c","o"]
 

Constraints:

1 <= words.length <= 100
1 <= words[i].length <= 100
words[i] consists of lowercase English letters.
*/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<words[0].size();i++){
            v1[words[0][i]-'a']++;
        }
        for(int i=1;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                v2[words[i][j]-'a']++;
            }
            for(int k=0;k<26;k++){
                v1[k]=min(v1[k],v2[k]);
                v2[k]=0;
            }
        }
        vector<string>res;
        for(int i=0;i<26;i++){
            if(v1[i]>0){
                while(v1[i]--){
                string s = "";
                s+=i+'a';
                res.push_back(s);
                }
            }
        }
        return res;
    }
};
