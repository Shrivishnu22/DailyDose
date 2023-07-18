/*
N-bonacci Numbers

Input : N = 3, M = 8
Output : 0, 0, 1, 1, 2, 4, 7, 13

We need to print first M terms.
First three terms are 0, 0 and 1.
Fourth term is 0 + 0 + 1 = 1
Fifth term is 0 + 1 + 1 = 2
Sixth terms is 1 + 1 + 2 = 4
Seventh term is 7 (1 + 2 + 4) 
and eighth term is 13 (7 + 4 + 2).

Input : N = 4, M = 10
Output : 0 0 0 1 1 2 4 8 15 29 
*/

#include <bits/stdc++.h>

using namespace std;

void fun(int n, int m) {
	vector<int>arr;
	for (int i = 0; i < n - 1; i++) {
		arr.push_back(0);
	}
	int sum = 1;
	arr.push_back(1);
	for (int j = n; j < m; j++) {
		arr.push_back(sum);
		if (j > n) {
			sum -= arr[j - n];
		}
		sum += arr[j];
	}
	for (int i : arr)	cout << i << " ";
}
int main()
{
	int n, m;
	cin >> n >> m;
	fun(n, m);
	return 0;
}
