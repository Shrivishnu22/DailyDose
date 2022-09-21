/*
Build the program to print the following pattern based on n.

Test Case 1:

Input

Enter the value of n: 2

Output

1 2

2

Test Case 2:

Input

Enter the value of n: 5

Output

1 2 3 4 5

2 4 6 8

4 8 12

8 16

16

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, org = 1, mul = 1, element = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		org = element;
		mul = 1;
		for (int j = 0; j < n - i; j++) {
			if (j == 1) {
				element = org * mul;
				cout << org*mul << " ";
				mul++;
				continue;
			}
			cout << org*mul << " ";
			mul++;
		}
		cout << endl;
	}
	return 0;
}