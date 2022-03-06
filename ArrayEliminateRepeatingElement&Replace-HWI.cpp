/*
You are given an array Arr of N integers.

You have to choose a value val which occurs two or more times in Arr.
In one operation take the two occurrences of val from this array.
Delete one of them and replace the other one by 2*val.

Find the maximum number of times you can do the operation.

Input Format
The first line contains an integer N denoting the number of elements in Arr.
Each line i of the N subsequencent lines (where 0 <= i <= N) contains an integer describing Arr[i].

Constraints
1 <= N <= 10^5
1 <= Arr[i] <= 10^9

Sample Input 1
2
1
1

Sample Output 1
1

Explaination
In this test case we can take the two elements of the array and
make them equal to 2.

Sample Input 2
4
1
1
4
2

Sample Output 2
3

Explaination
We can take the first two elements and make them equal to 2.
Then the array would be [2,4,2] we can take the first and last element and make equal to 4.
The obtained array is [4,4].
We can take these two fours and the array would be [8]. we did the operation 3 times.
Therefore the answer is 3.

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , element;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		cin >> element;
		v.push_back(element);
	}
	int count = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (v[i] == v[i + 1]) {
			count++;
			v.erase(v.begin() + i);
			v.insert(v.begin() + i + 1, v[i] * 2);
			sort(v.begin(), v.end());
		}
	}
	cout << count << endl;


}
