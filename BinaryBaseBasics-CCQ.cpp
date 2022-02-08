/*
You are given a binary string S and an integer K. In one operation, you can pick any bit and flip it, i.e turn 0 to 1 or 1 to 0. 
Can you make the string S a palindrome using exactly K operations?

Print YES if this is possible, and NO if it is not

Input :  
2
3 0
110
6 1
101100

Output : 
NO
YES

Explanation
Test case 1: S is not a palindrome, and no operations can be performed on it because K=0.

Test case 2: Flip the first bit to obtain S=001100, which is a palindrome.

*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int len,k,count=0;
        cin>>len>>k;
        string s;
        cin>>s;
        for(int i=0;i<len/2;i++){
            if(s[i]!=s[len-i-1]){
                count+=1;
            }
        }
        if(k>=count){
            if((k-count)%2==0) cout<<"YES"<<endl;
            else if(len%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
