/*
A war is happening. The enemy battalion has planted a bomb in your bunker. Your spy has intercepted 
a message from the enemy. It contains a list with N numbers and a key (K). The numbers are used to 
construct a sequence that will defuse the bomb.
According to your spy, the logic to extract the sequence from the message is to replace each number 
with the sum of the next K numbers, if the value of K is positive. If the value of K is negative, 
the number is replaced by the sum of the previous K numbers. The series of numbers is considered in 
a cyclic fashion for the last K
numbers.

Input Format:
The input to the function/method consists of three arguments; size, an integer representing the 
size of the list (N);
key, an integer representing the key (K); message, representing the list of integers.

Output Format:
Return a list of integers representing the sequence that will defuse the bomb

Constraints:
0 < size <= 10^5
-10^6 <= message[i] <= 10^6 0 <= i < size

Sample Input : 4 3 4 2 -5 11
Sample Output :
8 10 17 1

*/

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
