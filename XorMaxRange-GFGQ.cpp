/*
Maximum XOR value of a pair from a range

Given a range [L, R], we need to find two integers in this range such that their XOR is maximum among all possible choices of two integers. More Formally, 
given [L, R], find max (A ^ B) where L <= A, B 

Examples : 
 

Input  : L = 8
         R = 20
Output : 31
31 is XOR of 15 and 16.  

Input  : L = 1
         R = 3
Output : 3

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int low, high;
	cin >> low >> high;
	int cal = low ^ high;
	int res = 0;
	while (cal) {
		res++;
		cal >>= 1;
	}
	cout << (1 << res) - 1 << endl;
	return 0;
}
