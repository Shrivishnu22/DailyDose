/*
Given a maximum of four digit to the base 17 (10 – A,
11 – B, 12 – C, 13 – D … 16 – G} as input, output its decimal value.

Test Cases

Case 1
Input – 1A
Expected Output – 27

Case 2
Input – 23GF
Expected Output – 10980

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    bool flag=true;
    int base=1,res=0;
    for(int i=str.size()-1;i>=0;i--){
        int digit = str[i]-'0';
        if(digit>=0&&digit<=9)  res+=base*digit;
        else{
            if(str[i]>'G'){
                flag=false;
                break;
            }
            int temp = str[i]-'A'+10;
            res+=base*temp;
        }
        base*=17;
    }
    if(flag)    cout<<res<<endl;
    else    cout<<-1<<endl;
    return 0;
}
