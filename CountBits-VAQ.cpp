/*

Given an array of elements, the user wants to return the sum of bits of each number.

Input : 1 2 3 4 
Output : 5

Input : 1 2 5 8 9 
Output : 7

Explaination for first test case : 
      1 = 001
      2 = 010
      3 = 011
      4 = 100
      --------
Output :  5 (Total number of bits(1's))

*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, sum = 0;
	while (cin >> a) {
		while (a) {
			if (a % 2 != 0) sum++;
			a = a / 2;
		}
	}
	cout << sum;
	return 0;
}

