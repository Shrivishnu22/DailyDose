/*
a = {5, 10, 15, 20, 25, 30}
b = {35, 10, 15, 40, 15, 20}

10 15 
15 
15 20 
20 

a = {1, 2, 3, 4, 5}
b = {2, 3, 4, 7, 1, 2}

1 2 
2 3 4 
2 
3 4 
4 

a = {8, 4, 7, 3, 2, 1, 7}
b = {8, 7, 3, 2, 4, 7, 3, 5}

8 
4 7 3 
7 3 2 
7 3 
3 2 
3 
2 
7 
7 

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int>a = {5, 10, 15, 20, 25, 30}, b = {35, 10, 15, 40, 15, 20};
	vector<vector<int>>res;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			vector<int>temp = {};
			if (a[i] == b[j]) {
				int s = i, d = j;
				while (a[s] == b[d] && s < a.size()  && d < b.size()) {
					temp.push_back(a[s]);
					s++;
					d++;
				}
				res.push_back(temp);
			}
			else {
				continue;
			}
		}
	}
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}
}
