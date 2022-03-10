/*
consider an array of elements are there. Each element can be a leader when it satify one condition 
  * It should larger than forward elements
  
Input : {10,9,8,11}
Output : 11

Input : {6,5,3,4,1,2}
Output : 6 5 4 2
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

	std::vector<int> v = {10, 9, 8, 11}, ans;
	int maxi = 0;
	for (int i = 0; i < v.size(); i++) {
		maxi = *max_element(v.begin() + i + 1, v.end());
		if (v[i] > maxi)
			ans.push_back(v[i]);
	}
	for (auto it : ans) {
		cout << it << " ";
	}

}
