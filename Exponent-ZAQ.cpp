/*
Find the powers of a number without using inbuilt functions.

I/p: 2 2
O/p: 4

I/p: 2 -2
O/p: 0.25  --> (2)^-2 --> 1/(2)^2 --> 1/4 --> 0.25

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double res = 1;
	int num, exp;
	cin >> num >> exp;
	if (exp > 0) {
		for (int i = 0; i < exp; i++) {
			res *= num;
		}
	}
	else {
		int temp = abs(exp);
		double out = 1;
		for (int i = 0; i < temp; i++) {
			out *= num;
		}
		res = 1 / out;
	}
	cout << res;

	return 0;
}
