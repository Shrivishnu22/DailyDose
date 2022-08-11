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
