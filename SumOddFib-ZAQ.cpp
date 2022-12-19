/*
Sum odd fibanocii upto n

I/p: 8
O/p: 10  // 1 1 2 3 5 8 --> 10

I/p: 99
O/p: 188

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>fib = {0, 1};
	int i = 0, res = 0;
	if (n == 0 || n == 1)	cout << n << endl;
	else {
		while (true) {
			int sum = fib[i] + fib[i + 1];
			if (sum > n) {
				break;
			} else {
				fib.push_back(sum);
			}
			i++;
		}
		for (int i = 0; i < fib.size(); i++) {
			if (fib[i] % 2) {
				res += fib[i];
			}
		}
		cout << res << endl;
	}

	return 0;
}
