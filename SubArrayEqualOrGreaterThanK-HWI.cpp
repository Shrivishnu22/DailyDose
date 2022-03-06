/*
The value of a subarray from index l to index r is defined as (r-l)*A[l]+(r-l)*A[l+1]+....(r-l)*A[r]

Given an array A containing N integers. Find minimum value of r-l,
such that the value of subarray from index l to index r is at least K.

Note:
If you are not able to find any such subarray return -1.

nput Format
The first line contains an Integer N denoting the number of elements in A,
The next line contains an integer K denoting the minimum required value.
Each line i of the N subsequent lines (where 0<= i <= N) conatins an integer describing A[i].

Constraints
1<= N <= 10^5
1 <= K <= 10^8

Sample input 1
3
8
8
8
5

Sample output 2
1

Explaination
Choose the subarray [8]


Sample input 2
3
20
17
10
11

Sample Output 2
2

Explaination
Choose subarray [10,11] and value will be 2*10+2*11=42

Sample Input 3
3
20
1
8
1

Sample Output 3
3

Explanation
We must choose the complete array then value will be 3*13*8+3*1=30
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, element;
	vector<int> v;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> element;
		v.push_back(element);
	}
	int l, r, temp = 0, index;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		l = 1, r = i + 1;
		for (int j = 0; j <= (r - 1); j++) {
			temp += (r - l) * v[j];
		}
		if (temp >= k) {
			index = (r - l) + 1 ;
			break;
		}
	}
	cout << index;
}