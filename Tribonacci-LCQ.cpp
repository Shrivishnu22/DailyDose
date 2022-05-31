/*
N-th Tribonacci Number

The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

 

Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4

Example 2:

Input: n = 25
Output: 1389537
 

Constraints:

0 <= n <= 37
The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.
*/

class Solution {
public:
    int tribonacci(int n) {
        if(n==0)    return 0;    
        vector<int>v={0,1,1};
        for(int i=3;i<=n;i++){
            int n=v.size();
            int sum = v[n-1]+v[n-2]+v[n-3];
            v.push_back(sum);
        }
        return v[v.size()-1];
    }
};
