/*
Gap Sum 

I/p:  arr: 1, 2, 3, 4, 5, 6, 7, 8, 9
      Gap: 3
O/p:  12 15 18 

I/p:  arr: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
      Gap: 2
O/p:  25 30 

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int gap = 3;
	for (int i = 0; i < gap; i++) {
		int sum = 0;
		for (int j = i; j < v.size(); j += gap)	sum += v[j];
		cout << sum << " ";
	}
	return 0;
}
