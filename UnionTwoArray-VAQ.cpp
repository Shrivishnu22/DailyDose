/*
input : arr1={1,2,3,4,4,5,5,8,9,9}
        arr2={0,1,6,6,9,10,15}
output : {0,1,2,3,4,5,6,8,9,10,15}

Explanation : union the two arrays and remove dupilcate elements.

*/




#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v = {1, 2, 3, 3, 3, 3, 4, 4, 5, 5, 8, 9, 9, 10}, w = {0, 1, 6, 6, 9, 10, 15};
	set <int> s1, s2;
	for (int i = 0; i < v.size(); i++) {
		s1.insert(v[i]);
	}
	for (int i = 0; i < w.size(); i++) {
		s1.insert(w[i]);
	}
	for (auto it : s1)
		cout << it << " ";
	return 0;
	
}

//While inserting multiple identitical elements in a set. It eliminates the elements which gets repeated.
