/*
Fibonacci Triangle

I/p: n=5
O/p:
0
0 1
0 1 1
0 1 1 2
0 1 1 2 3


I/p: n=8
O/p:
0
0 1
0 1 1
0 1 1 2
0 1 1 2 3
0 1 1 2 3 5
0 1 1 2 3 5 8
0 1 1 2 3 5 8 13

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v = {0, 1};
	for (int i = 2; i < n; i++) {
		v[i] = v[i - 2] + v[i - 1];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << v[j] << " ";
		}
		cout << endl;
	}
	return 0;
}