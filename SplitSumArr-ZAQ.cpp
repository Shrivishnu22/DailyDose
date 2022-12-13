/*
Build the program to split the array based on position given and sum the two arrays as a number.

Test case 1:

Input

Enter the total no. of elements: 7

2 6 3 0 6 3 1

Enter the position to split the array: 4

Output 26337

Explanation:

26306+31 26337

Test case 2

Input

Enter the total no. of elements:2

2 1

Enter the position to split the array 1

output 21
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ele;
	cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; i++) {
		cin >> ele;
		arr.push_back(ele);
	}
	int split;
	cin >> split;
	int rem1 = 0, rem2 = 0;
	for (int i = 0; i <= split; i++) {
		rem1 = rem1 * 10 + arr[i];
	}
	for (int i = split + 1; i < n; i++) {
		rem2 = rem2 * 10 + arr[i];
	}
	int res = rem1 + rem2;
	cout << res << endl;
	return 0;
}