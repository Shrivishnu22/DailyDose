/*
Generate a given series
1 2 1 3 2 5 3 7 5 9 8 11 13

Odd indices -> Fibanocci series
Even indices -> Prime numbers
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 10;
	int size = (n + 1) / 2;
	int prime[size], fib[size], res[n];
	fib[0] = 1; fib[1] = 1;
	for (int i = 2; i < size; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int num = 2, idx = 0;
	bool flag = true;
	while (size > 0 && flag) {
		for (int i = 2;  i <= num; i++) {
			if (num % i == 0) {
				flag = false;
				break;
			}
		} if (flag) {
			prime[idx++] = num;
			size--;
		}
		num++;
		flag = true;

	}
	int p = 0, o = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) res[i - 1] = fib[p++];
		else res[i - 1] = prime[o++];
	}

	for (int i = 0; i < n; i++) cout << res[i] << " ";
	return 0;
}