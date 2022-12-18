/*
Sum up the adjacent elements.

I/p :
6
1 2 3 4 5 6
O/p :
3 7 11

I/p:
3
1 2 3
O/p:
3 3

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, element;
    cin >> n;
    vector<int>v, res;
    for (int i = 0; i < n; i++) {
        cin >> element;
        v.push_back(element);
    }
    for (int j = 0; j < n; j += 2) {
        res.push_back(v[j] + v[j + 1]);
    }
    for (auto it : res) {
        cout << it << " ";
    }

    return 0;
}