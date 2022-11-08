/*
Build a program to reverse elements in the given array.

Constraint: Additional arrays should not be used.


Test Case 1:

Input

Enter the no. of elements, N = 5

Enter the array: 1 2 0 4 -5

Output

-5 4 0 2 1

Test Case 2:

Input

Enter the no. of elements, N=1

Enter the array: 1

Output

1
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
	int left = 0, right = n - 1;
	while (left < right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	for (int it : arr) cout << it << " ";
	return 0;
}