/*
Count number of Paper Fold

Given a paper of height h and width w. You have to perform operation to reduce the
height and width to the resultant value.
Count the number of folds is required to achieve the resultant height and width.
we can also fold parallely.

Testcases

Input: Height Width Resultant_height Resultant_Width
Output: Return number of folds required.

Input: 8 4 6 1
Output: 3

Input: 2 3 2 2
Output: 1

*/

#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int h, w, resh, resw, count = 0;
	cin >> h >> w >> resh >> resw;
	int hdiff = abs(h - resh), wdiff = abs(w - resw);
	while (h != resh) {
		if (hdiff >= (h / 2)) {
			count++;
			h /= 2;
		}
		else {
			count++;
			h -= hdiff;
		}
	}
	while (w != resw) {
		if (wdiff > (w / 2)) {
			count++;
			w /= 2;
		}
		else {
			count++;
			w -= wdiff;
		}
	}
	cout << count << endl;

}


/*
Explanation

First calculate the difference between the original height and resultant height.
if difference more than half of original height then reduce the height by half.
else reduce the height by the difference value.

It also appilicable for width.
In each and every step increament the count variable.
At last return the count.

*/





