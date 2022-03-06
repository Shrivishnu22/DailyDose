/*
You are given a binary string S of length N.

You have to perform the following operation exactly once:

Select an index i (1≤i≤N) and delete Si from S. The remaining parts of S are concatenated in the same order.
How many distinct binary strings of length N−1 can you get after applying this operation?


Input Format

The first line of input contains a single integer T - the number of test cases. The description of T test cases follow.
The first line of each test case contains N - the length of the binary string S.
The second line contains the binary string S.

Output Format

For each test case, output the number of distinct binary strings that you can get after applying the operation exactly once.

Constraints

1≤T≤105
2≤N≤105
Sum of N does not exceed 2⋅105 over all testcases.

Sample Input 1
3
3
100
4
1111
5
10110

Sample Output 1
2
1
4

Explanation

Test Case 1: We have S=100. Now, we can get 00 (on deleting S1), 10 (on deleting S2) and 10 (on deleting S3). Therefore, we can get 2 distinct strings.

Test Case 2: We have S=1111. Now, we will always get 111 irrespective of the index i on which we apply the operation. Therefore, we can get 1 distinct string.
*/


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int len, res;
		string bit;
		cin >> len >> bit;
		res = len;
		for (int i = 1; i < len; i++)
			if (bit[i - 1] == bit[i])
				res--;
		cout << res << endl;
	}
}
