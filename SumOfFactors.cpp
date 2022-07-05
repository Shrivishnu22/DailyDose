/*

Sum of factors of previous level

n -> Size of an array 
arr -> Array of elements 
l -> Level

I/p: 3
     1 2 4
     1
O/p: 11
Explanation -> factors(1) -> 1     -> 1
	       factors(2) -> 1,2   -> 3
	       factors(4) -> 1,2,4 -> 7
	       			     ----
				      11

     
*/

#include <bits/stdc++.h>

using namespace std;

int helper(vector<int>a, int level, int s) {
	int sum = 0, lev = level;
	vector<int>inn;
	if (lev == 0) {
		return s;
	}
	for (int i = 0; i < a.size(); i++) {
		for (int j = 1; j <= a[i]; j++) {
			if (a[i] % j == 0) {
				sum += j;
				inn.push_back(j);
			}
		}
	}
	lev--;
	return helper(inn, lev, sum);

}
int main()
{
	int n, element, sum = 0;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		cin >> element;
		v.push_back(element);
	}
	int l;
	cin >> l;
	cout << helper(v, l, 0);
	return 0;
}
