/*
Geek-onacci Number

Stand out from the crowd. Prepare with Complete Interview Preparation  

Geek created a random series and given a name geek-onacci series. Given four integers A, B, C, N. A, B, C represents the first three numbers of geek-onacci series. Find the Nth number of the series. The nth number of geek-onacci series is a sum of the last three numbers (summation of N-1th, N-2th, and N-3th geek-onacci numbers)

Note: The answer can be very large. So, output answer modulo 109 + 7.

Input:
1. The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
2. The first line of each test case contains four space-separated integers A, B, C, and N.

Output: For each test case, print Nth geek-onacci number

Constraints:
1. 1 <= T <= 102
2. 1 <= A, B, C <= 105
3. 4 <= N <= 104

Example:
Input:
3
1 3 2 4
1 3 2 5
1 3 2 6

Output:
6
11
19
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int tar,sum=0,cnt=3;
	    cin>>tar;
	    while(cnt<tar){
	        sum=((a+b)%10000000007+c)%1000000007;
	        a=b;
	        b=c;
	        c=sum;
	        cnt++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
