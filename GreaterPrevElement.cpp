/*
You are given an array. print the elements of the array which is greater than its previous elements in the array.
I/p: 7
     2 -3 -4 5 9 7 8
O/p: 2 5 9

I/p: 3
     4 1 5
O/p: 4 5
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int j=0;j<=n;j++){
        maxi=max(maxi,arr[j]);
        if(maxi<arr[j+1]){
            cout<<maxi<<" ";
            maxi=arr[j+1];
        }
    }
    return 0;
}
