/*
Alternating Divisibility

JJ challenges the Chef to construct an array A of length N such that the following conditions hold:

Ai divides Ai+1 when i is odd and 1≤i≤N−1
Ai does not divide Ai+1 when i is even and 1≤i≤N−1
1≤Ai≤2⋅N
All Ai are pairwise distinct
Can you help Chef complete JJ's challenge?

If multiple arrays satisfying the above conditions exist print any one of them.

It is guaranteed that under the given constraints, at least one array satisfying the above conditions exists.

Input Format

The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - the length of the array A to be constructed.

Output Format

For each test case, output a single line containing N space-separated integers, denoting the elements of the array A you constructed.

Constraints

1≤T≤1000
1≤N≤105
It is guaranteed that the sum of N over all test cases does not exceed 5⋅105.

Sample Input 1
3
4
1
6

Sample Output 1
1 3 2 4
2
1 5 6 12 3 9

Explanation

Test case-1: [1,3,2,4] is a valid array because:

A1=1 divides A2=3.
A2=3 does not divide A3=2.
A3=2 divides A4=4.

Test case-3: [1,5,6,12,3,9] is a valid array because:

A1=1 divides A2=5.
A2=5 does not divide A3=6.
A3=6 divides A4=12.
A4=12 does not divide A5=3.
A5=3 divides A6=9
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, element = 1;
		cin >> n;
		int a[n];
		if (n == 1) cout << 1;
		else {
			for (int i = 0; i < n - 1; i += 2) {
				a[i] = element;
				a[i + 1] = element * 2;
				element += 2;
			}
			if (n % 2 == 1 ) a[n - 1] = a[n - 2] + 1;
			for (int j = 0; j < n; j++) {
				cout << a[j] << " ";
			}
		}
		cout << endl;

	}
	return 0;
}
