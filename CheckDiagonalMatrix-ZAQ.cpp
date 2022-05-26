/*
Find the given matrix is diagonal matrix or not.

I/p: 3 3
	 1 0 0
	 0 1 0
	 0 0 1
O/p: True

I/p: 4 4
	 1 0 0 0
	 0 1 0 0
	 0 0 1 1
	 0 0 0 1
O/p: False
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;
	int arr[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}
	bool flag = true;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i != j) {
				if (arr[i][j] != 0) {
					flag = false;
					break;
				}
			}
		}
	}
	if (flag == 0)
		cout << "False";
	else
		cout << "True";
	return 0;
}
