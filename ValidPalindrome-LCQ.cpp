/*
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
  
  
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

  
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/

class Solution {
public:
    bool validChar(char a){
        if((a>= 'a'&&a<='z') || (a>='A'&& a<='Z') || (a>='0'&&a<='9') )
            return true;
        return false;
    }
    char lowerChar(char a){
        if((a>='a' && a<='z')||(a>='0'&&a<='9'))
            return a;
        int temp = a - 'A'+'a';
        return temp;
    }
    bool isPalindrome(string s) {
        int strlen = s.length();
        string newstr;
        for(int i = 0;i<strlen;i++){
            if(validChar(s[i])){
                newstr.push_back(s[i]);
            }
        }
        for (int i = 0; i < newstr.length(); i++) {
		    newstr[i] = lowerChar(newstr[i]);
    	}
        int length = newstr.length()-1;
        bool flag=true;
        int i=0;
        while(i<length){
            if(newstr[i]!=newstr[length])
                flag=false;
            i++;
            length--;
        }
        if(flag) return true;
        else return false;
    }
};
