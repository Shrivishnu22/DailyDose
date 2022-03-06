/*
Return the person's index value who knows everyone(0)
leave the unkown persons(1)

Input:
4 4
0 0 1 0
0 0 1 0
0 0 0 0
0 0 1 0

Output:
2

Input:
3 3
1 0 0
0 0 0
0 1 0

Output:
1

*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int col, row;
	cin >> col >> row;
	int a[col][row];
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cin >> a[i][j];
		}
	}
	int nzero = 0, none = 0, res, prev = 0;
	for (int i = 0; i < col; i++) {
		none = 0, nzero = 0;
		for (int j = 0; j < row; j++) {
			if (a[i][j] == 0) {
				nzero++;
			}
			else {
				none++;
			}
		}
		if (nzero > prev) {
			res = i;
		}
		prev = nzero;

	}
	cout << "The answer is " << res << endl;
	return 0;
}