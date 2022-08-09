#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>arr={1,2,3,4},res;
    int k=2,i=0,cnt=0,sum=0,idx=0;
    while(i<arr.size()){
        idx=i,cnt=0,sum=0;
        while(cnt<k){
            if(idx==arr.size()-1)  idx=0;
            else    idx++;
            if(arr[idx]>0){
                sum+=arr[idx];
                cnt++;
            }    
        }   
        res.push_back(sum);
        i++;
    }
    for(int item:res)   cout<<item<<" ";
    return 0;
}
