/*

Problem Statement:

Given an array of integers arr[], the task is to Find the sum of all the Mersenne numbers from the array. A number is a Mersenne number if it is greater than 0 and is one less than some power of 2. First few Mersenne numbers are 1, 3,
7, 15, 31, 63, 127, ... 

Examples:
Input: arr[] = {17, 6, 7, 63, 3}
Output: 73
Only 7, 63 and 3 are Mersenne numbers i.e. 7 +63 + 3 = 73 

Input: arr[]= (1, 3, 11, 45}
Output: 4

Input Format:
Enter the array elements

Output Format:
Display the sum of all the Mersenne numbers from the array

Constraints:
N/A

Sample Input:
5 17 6 7 63 3
Sample Output:
73
*/

#include<bits/stdc++.h>
using namespace std;
bool check(int n) {
int res=0;
n++;
while(n>0){
if(n&1) res++;
n=n>>1;
}
if(res==1 return true;
else  return false;
}
int main(){
int n,sum=0,element;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++){
cin>>element;
arr.push_back(element);
}
for(int i=0;i<n;i++){
if(check(arr[i])) sum+=arr[i];
}
cout<<sum<<endl;
}
