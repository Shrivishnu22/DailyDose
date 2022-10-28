/*
Number series

I/p: 8
O/p: 1 -2 -3 4 5 6 -7 -8

I/p: 20
O/p: 1 -2 -3 4 5 6 -7 -8 -9 -10 11 12 13 14 15 -16 -17 -18 -19 -20


*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, num = 1, count = 1, temp = 0;
	cin >> n;
	while (num <= n) {
		temp = count;
		if (count % 2 != 0) {
			while (temp > 0) {
				if (num > n)   break;
				cout << num << " ";
				num++;
				temp--;
			}
			count++;
		} else {
			while (temp > 0) {
				if (num > n)   break;
				cout << "-" << num << " ";
				num++;
				temp--;
			}
			count++;
		}
	}
	return 0;
}
