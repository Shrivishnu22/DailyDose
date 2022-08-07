/*
Mr. Jason has captured your friend and has a collar around his neck. He has locked the collar with a given “locking key". Now it can only be opened with an 
“unlocking key”. Your friend sees the locking key but he does not know how to find unlocking key.You can calculate the unlocking key if 
you have the locking key, because the unlocking key will be the smallest (in magnitude) permutation of the digits of the locking key and will never start with zero. 
Help your friend write an algorithm that outputs the unlocking key by taking key as an input.

The input to the function/method consists of an argument lockingkey, an integer representing the 
locking key.

Output Format:
Return an integer representing the unlocking key

Constraints:
-10^7 <= lockingkeys <= 10^7

Sample Input : 62154
Sample Output : 12456

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,out=0;
    cin>>num;
    vector<int>v;
    while(num>0){
        v.push_back(num%10);
        num/=10;
    }
    sort(v.begin(),v.end());
    int i=0,count=0;
    while(i<v.size()){
        if(v[i]==0) count++;
        i++;
    }
    for(int i=0;i<v.size();i++){
        out=out*10+v[i];
        if(i==count-1){
            while(count--){
                out=out*10;
            }
        }
    }
    cout<<out;
    return 0;
}


