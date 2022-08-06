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


