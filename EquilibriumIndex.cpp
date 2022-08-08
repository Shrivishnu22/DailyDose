/*
Equilibrium index of an array

Difficulty Level : Easy
Last Updated : 13 Jul, 2022
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. For example, in an array A: 

Example : 
Input: A[] = {-7, 1, 5, 2, -4, 3, 0} 
Output: 3 
3 is an equilibrium index, because: 
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

Input: A[] = {1, 2, 3} 
Output: -1 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>arr = { 1, 2, 3};
	int rsum = 0, lsum = 0;
	bool flag = true;
	for (int i = 0; i < arr.size(); i++)	rsum += arr[i];
	for (int j = 0; j < arr.size(); j++) {
		rsum -= arr[j];
		if (lsum == rsum) {
			flag = false;
			cout << j << endl;
			break;
		}
		lsum += arr[j];
	}
	if (flag)	cout << -1 << endl;
	return 0;
}
