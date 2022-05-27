/*
Check the given matrix is diagonal matrix or not with atmost one deletion

I/p :3
3
1 0 0
1 1 0
0 0 1
O/p:
True
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int row, col, count = 0, count1 = 0;
	cin >> row >> col;
	int arr[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}
	bool flag = true;
	for (int i = 0; i < row; i++) {
		count1 = 0;
		for (int j = 0; j < col; j++) {
			if (i != j) {
				if (arr[i][j] != 0) {
					count1++;
					break;
				}
			}
		}
		if (count1 > 0)	count++;
	}
	if (count <= 1)
		cout << "True";
	else
		cout << "False";
	return 0;
}
