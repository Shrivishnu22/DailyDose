/*
Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

 

Example 1:

Input: s = "hello"
Output: "holle"

Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/

class Solution {
public:
    string reverseVowels(string s) {
        int left=0,right=s.size()-1;
        while(left<=right){
            if((s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u' || s[left]=='A' || s[left]=='E' || s[left]=='I' || s[left]=='O' || s[left]=='U' )&&(s[right]=='a'|| s[right]=='e' || s[right]=='i'||s[right]=='o'||s[right]=='u'||s[right]=='A'|| s[right]=='E'|| s[right]=='I'|| s[right]=='O'|| s[right]=='U'  )){
                char temp = s[left];
                s[left]=s[right];
                s[right]=temp;
                left++;
                right--;
            }else if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u' || s[left]=='A' || s[left]=='E' || s[left]=='I' || s[left]=='O' || s[left]=='U' )
                right--;
            else
                left++;
        }
        return s;
    }
};
