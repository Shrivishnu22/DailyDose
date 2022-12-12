/*
Spiral Matrix

I/p:
4

O/p:
4444444
4333334
4322234
4321234
4322234
4333334
4444444

I/p:
9

O/p:
99999999999999999
98888888888888889
98777777777777789
98766666666666789
98765555555556789
98765444444456789
98765433333456789
98765432223456789
98765432123456789
98765432223456789
98765433333456789
98765444444456789
98765555555556789
98766666666666789
98777777777777789
98888888888888889
99999999999999999
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int size = n * 2 - 1;
	int res[size][size];
	int Rstart = 0, Rend = n * 2 - 2, Cstart = 0, Cend = n * 2 - 2;
	while (Rstart <= Rend && Cstart <= Cend) {
		for (int i = Cstart; i <= Cend; i++) {
			res[Cstart][i] = n;
		}
		Rstart++;
		for (int j = Rstart; j <= Rend; j++) {
			res[j][Rend] = n;
		}
		Cend--;
		for (int k = Cend; k >= Cstart; k--) {
			res[Rend][k] = n;
		}
		Rend--;
		for (int l = Rend; l >= Rstart; l--) {
			res[l][Cstart] = n;
		}
		Cstart++;
		n--;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << res[i][j];
		}
		cout << "\n";
	}
	return 0;
}
