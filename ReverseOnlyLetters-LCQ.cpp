/*
Reverse Only Letters

Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

 

Example 1:

Input: s = "ab-cd"
Output: "dc-ba"

Example 2:

Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"

Example 3:

Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
 

Constraints:

1 <= s.length <= 100
s consists of characters with ASCII values in the range [33, 122].
s does not contain '\"' or '\\'.
*/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int first=0,last=s.size()-1;
        while(first<=last){
            if(((s[first]>='a'&&s[first]<='z')||(s[first]>='A'&&s[first]<='Z'))&&((s[last]>='a'&&s[last]<='z')||(s[last]>='A'&&s[last]<='Z'))){
                char temp = s[first];
                s[first]=s[last];
                s[last]=temp;
                first++;
                last--;
            }else if((s[first]>='a'&&s[first]<='z')||(s[first]>='A'&&s[first]<='Z'))
                last--;
            else if ((s[last]>='a'&&s[last]<='z')||(s[last]>='A'&&s[last]<='Z'))
                first++;
            else{
                first++;
                last--;
            }
        }
        return s;
    }
};
