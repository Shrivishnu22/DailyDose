/*
Build the program to print largest odd number in an array

Constraint: Array elements >= 0

Test Case 1:

Input

Enter the no. of elements: 4
Enter the array: 6 0 7 5

Output

7

Test Case 2:

Input

Enter the no. of elements: 5

Enter the array: 60 12 4 10

Output

No odd number present.

Test Case 3:

Input

Enter the no. of elements: 7
Enter the array: 19 73 79 73 19 59 79

Output

79
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, element;
	cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; i++) {
		cin >> element;
		arr.push_back(element);
	}
	bool flag = false;
	int maxi = INT_MIN;
	for (int j = 0; j < n; j++) {
		if (arr[j] % 2 != 0) {
			if (arr[j] > maxi) {
				maxi = arr[j];
				flag = true;
			}
		}
	}
	if (flag)    cout << maxi << endl;
	else    cout << "No odd number present" << endl;
	return 0;
}