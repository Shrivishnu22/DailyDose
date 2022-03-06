/*
An index i in a permutation P of length N is said to be good if:

Pi is divisible by i

You are given 2 integers N and K. You need to construct a permutation P of length N such that exactly K indices in that permutation are good.

If no such permutation exists, output −1.

If multiple such permutations exist, output any.

Input Format

The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers N and K - the length of the permutation to be constructed and the number of good indices.

Output Format

For each test case, output any permutation satisfying the given condition.

Constraints

1≤T≤1000
1≤N≤105
1≤K≤N
Sum of N over all testcases does not exceed 2⋅105

Sample Input 1
2
1 1
6 2

Sample Output 1
1
4 5 6 1 2 3

Explanation

Test case-1: In [1], P1=1 is divisible by 1. Therefore it is a valid permutation having 1 good index.

Test case-2: In [4,5,6,1,2,3], P1=4 is divisible by 1 and P3=6 is divisible by 3. Therefore it is a valid permutation having 2 good indices.
*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> vp;
		for (int i = 1; i <= n; i++)vp.push_back(i);
		if (n == 1) {
			cout << 1 << endl;
			continue;
		}
		if (k == n - 1) {
			swap(vp[0], vp[1]);
			for (auto e : vp)
			{
				cout << e << " ";
			}
			cout << endl; continue;
		}
		int sw = 0;
		k = n - k;
		while (k--) {
			swap(vp[sw], vp[sw + 1]);
			sw++;

		}
		for (auto e : vp) {
			cout << e << " ";

		}
		cout << endl;
	}
	return 0;
}
