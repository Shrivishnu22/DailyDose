/*
Get a String from user, and to print corresponding number in a keypad format

Input Format: Get a String
Output Format: Print Corresponding Number Constraints:

Sample Input 1:
Welcome to Sixphrase team
Sample Output 1:
9 33 555 222 666 6 33 0 8 666 0 7777 444 99 7 44 777 2 7777 33 0 8 33 2 6

Sample Input 2: Hai
Sample Output 2:
44 2 444

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<char>>arr={
        {'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},
        {'t','u','v'},{'w','x','y','z'}
    };
    string s,out;
    getline(cin,s);
    int cnt=0,index=0;
    for(int i=0;i<s.size();i++){
        cnt=0;
        char ch=s[i];
        if(ch==' '){
            out+=to_string(0);
            out+=" ";
            continue;
        }
        for(int j=0;j<8;j++){
            cnt=0;
            for(int k=0;k<arr[j].size();k++){
                cnt++;
                if(ch==arr[j][k]){
                    index=j+2;
                    while(cnt--){
                        out+=to_string(index);
                    }
                }
            }
        }
        out+=" ";
    }
    cout<<out<<endl;

    return 0;
}
