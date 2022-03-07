/*
You are given an array arr of length N.

Find the smallest positive integer x such that there exists no pair 
of integers i,j where 0<= i < j< n for which gcd of arr[i] and arr[j]
is divisible by x.

Input format
The first line contains an integer N, denoting the number of elements in arr.
Each line i of the N subsequent lines (where 0<=i<N) contains an integer describing
arr[i]

Constraints 

1 <= N <= 2*10^5
1 <= arr[i] <= 10^5 

Sample Input 1
2
6
12

Sample Output 
4

Explanation
N=2 arr=[6,12] gcd(6,12)=6 is divisible by 2 and 3.
But not by 4. Hence answer is 4.

Sample Input 2
2
60
96

Sample Output 2
5

Explanation
N=2 arr=[60,96] 1,2,3,4 divides gcd(60,96)
but 5 does not Hence the answer is 5

Sample Input 3
4
2
4
6
8

Sample Output 3
3

Explanation 
N=4 arr=[2,4,6,8] gcd(2,4)=2, gcd(2,6)=2
gcd(2,8)=2 gcd(4,6)=2 gcd(4,8)=4
gcd(6,8)=2 Hence the answer is 3
*/

#include <bits/stdc++.h>
using namespace std;


int gcdTrouble(int N, vector<int>arr)
{
	int g = 0;
	set<int>s;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			g = __gcd(arr[i], arr[j]);
			s.insert(g);
		}
	}
	int res = 0, i = 1;
	bool flag = true;
	for (auto it : s) {
		while (flag) {
			if (it % i != 0) {
				flag = false;
				res = i;
			}
			i++;
		}
	}
	cout << res;
	return 0;
}

// Driver code
int main()
{
	int n, element;
	cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; i++) {
		cin >> element;
		arr.push_back(element);
	}

	gcdTrouble(n, arr);
}
